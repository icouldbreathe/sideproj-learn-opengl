#ifndef TESTTEXTURE2D_H
#define TESTTEXTURE2D_H

#include "Test.h"
#include <vendor/glm/glm/glm.hpp>
#include <Buffer/VertexArray.h>
#include <Buffer/IndexBuffer.h>
#include <Shader.h>
#include <Texture.h>
#include <map>


namespace test {

    class TestTexture2D : public Test {
    public:
        TestTexture2D();
        ~TestTexture2D();

        void OnUpdate(float deltaTime) override;
        void OnRender() override;
        void OnImGuiRender() override;
    private:
        std::unique_ptr<VertexArray>    m_VAO;  // Vertex Array Object
        std::unique_ptr<VertexBuffer>   m_VB;   // Vertex Buffer
        std::unique_ptr<IndexBuffer>    m_IB;   // Index  Buffer
        std::unique_ptr<Shader>         m_Shader;
        //std::unique_ptr<Texture>        m_Texture;

        glm::mat4                       m_Proj, m_View;
        glm::vec3                       m_TranslationA, m_TranslationB;

        std::unique_ptr<Texture> m_stoneTexture;
        std::unique_ptr<Texture> m_catTexture;
    };

}

#endif // TESTTEXTURE2D_H
