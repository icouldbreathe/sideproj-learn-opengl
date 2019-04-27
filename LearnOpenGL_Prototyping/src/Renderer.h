//
// Created by Dovydas Ciomenas on 2019-03-16.
//

#ifndef LEARNOPENGL_RENDERER_H
#define LEARNOPENGL_RENDERER_H

#include <glad/glad.h>
#include "Buffer/VertexArray.h"
#include "Buffer/IndexBuffer.h"
#include "Shader.h"

#define ASSERT(x)   if (!(x)) __asm volatile ("int3");

#define GLCall(x)   GLClearError();\
                    x;\
                    ASSERT(GLLogCall(#x, __FILE__, __LINE__))

void GLClearError();
bool GLLogCall(const char* function, const char* file, int line);

class Renderer {
public:
    void Clear() const;
    void SetClearColor(float r, float g, float b, float a) const;
    void Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader) const;
};

#endif //LEARNOPENGL_RENDERER_H
