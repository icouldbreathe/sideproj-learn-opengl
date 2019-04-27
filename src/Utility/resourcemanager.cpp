#include "Utility/resourcemanager.h"

std::map<std::string, Shader> ResourceManager::Shaders;
std::map<std::string, Texture> ResourceManager::Textures;

Shader ResourceManager::LoadShader(const char *vShaderPath, const char *fShaderPath, std::string name) {
    Shaders[name] = loadShaderFromFile(vShaderPath, fShaderPath);
    return Shaders[name];
}

Shader ResourceManager::loadShaderFromFile(const char *vShaderPath, const char *fShaderPath) {
    std::string     vertexCode;
    std::string     fragmentCode;
    std::ifstream   vShaderFile;
    std::ifstream   fShaderFile;

    vShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    fShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);

    try {
        vShaderFile.open(vShaderPath);
        fShaderFile.open(fShaderPath);

        std::stringstream vShaderStream, fShaderStream;
        vShaderStream << vShaderFile.rdbuf();
        fShaderStream << fShaderFile.rdbuf();

        vShaderFile.close();
        fShaderFile.close();

        vertexCode      = vShaderStream.str();
        fragmentCode    = fShaderStream.str();
    } catch(std::ifstream::failure e) {
        printf("ERROR::SHADER::FILE_NOT_SUCCESFULLY_READ\n");
    }

    const char* vShaderCode = vertexCode.c_str();
    const char* fShaderCode = fragmentCode.c_str();

    Shader shader;
    shader.Compile(vShaderCode, fShaderCode);

    return shader;

}

Texture ResourceManager::LoadTexture(const char *texturePath, std::string name) {
    Textures[name] = loadTextureFromFile(texturePath);
    return Textures[name];
}


/**
 * Resource Manager function to load textures from file.
 * Uses stb_image header to load the images into char data type.
 * stbi_load fills width, height and nrChannels with data on the width, height of the image
 * and the number of channels.
 * @param texturePath
 * @return
 */
Texture ResourceManager::loadTextureFromFile(const char *texturePath) {
    Texture texture;
    int width, height, nrChannels;
    unsigned char *data = stbi_load(texturePath, &width, &height, &nrChannels, 0);
    if (data) {
        texture.GenerateTexture(width, height, nrChannels, data);
    } else {
        printf("ERROR::TEXTURE:FILE_NOT_READ\n");
    }

    stbi_image_free(data);
    return texture;
}

void ResourceManager::Clear() {
    for (auto iter : Shaders)
        glDeleteProgram(iter.second.ID);
    for (auto iter : Textures)
        glDeleteTextures(1, &iter.second.texture);
}
