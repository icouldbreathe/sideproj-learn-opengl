//
// Created by Dovydas Ciomenas on 2019-03-16.
//

#ifndef LEARNOPENGL_VERTEXBUFFER_H
#define LEARNOPENGL_VERTEXBUFFER_H


class VertexBuffer {
private:
    unsigned int m_RendererID;
public:
    VertexBuffer(const void* data, unsigned int size);
    ~VertexBuffer();

    void Bind() const;
    void Unbind() const;
};


#endif //LEARNOPENGL_VERTEXBUFFER_H
