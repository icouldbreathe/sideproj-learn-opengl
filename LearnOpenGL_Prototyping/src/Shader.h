//
// Created by Dovydas Ciomenas on 2019-03-18.
//

#ifndef LEARNOPENGL_SHADER_H
#define LEARNOPENGL_SHADER_H

#include <string>
#include <glm/glm.hpp>
#include <glm/vec4.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <unordered_map>

struct ShaderProgramSource {
    std::string VertexSource;
    std::string FragmentSource;
};

class Shader {
private:
    std::string m_FilePath;
    unsigned int m_RendererID;
    std::unordered_map<std::string, int> m_UniformLocationCache;

public:
    Shader(std::string filePath);
    ~Shader();

    void Bind() const;
    void Unbind() const;

    // set uniforms
    void SetUniform4fv(const std::string &name, glm::vec4 value);
    void SetUniformMatrix4fv(const std::string &name, glm::mat4 value);
    void SetUniform1i(const std::string &name, int value);
private:
    int CompileShader(unsigned int type, const std::string& source);
    unsigned int CreateShader(const std::string& vertexShader, const std::string& fragmentShader);
    ShaderProgramSource ParseShader(const std::string& filePath);
    int GetUniformLocation(const std::string& name);
};

#endif //LEARNOPENGL_SHADER_H
