#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H

#include <map>
#include <string>
#include "../../libs/stb_image.h"

#include "Utility/shader.h"
#include "Utility/texture.h"


class ResourceManager {
public:
    static std::map<std::string, Shader> Shaders;
    static std::map<std::string, Texture> Textures;

    static Shader LoadShader(const char *vShaderPath, const char *fShaderPath, std::string name);
    static Texture LoadTexture(const char *texturePath, std::string name);

    static void Clear();
private:
    static Shader loadShaderFromFile(const char *vShaderPath, const char *fShaderPath);
    static Texture loadTextureFromFile(const char *texturePath);

    ResourceManager() {}
};

#endif // RESOURCEMANAGER_H
