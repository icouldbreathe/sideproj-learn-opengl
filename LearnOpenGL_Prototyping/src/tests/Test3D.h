#ifndef TEST3D_H
#define TEST3D_H

#include "Test.h"
#include <vendor/glm/glm/glm.hpp>
#include <Buffer/VertexArray.h>
#include <Buffer/IndexBuffer.h>
#include <Shader.h>

#include <map>
#include <Camera.h>


namespace test {

    class Test3D : public Test {
    public:
        Test3D();
        ~Test3D();

        void OnUpdate(float deltaTime) override;
        void OnRender() override;
        void OnImGuiRender() override;
    private:
        std::unique_ptr<VertexArray>    m_VAO;  // Vertex Array Object
        std::unique_ptr<VertexBuffer>   m_VB;   // Vertex Buffer
        std::unique_ptr<IndexBuffer>    m_IB;   // Index  Buffer
        std::unique_ptr<Shader>         m_Shader;

        glm::mat4                       m_Proj, m_View;
        glm::vec3                       m_TranslationA;

        Camera                          m_Camera;


    };

}

#endif // TEST3D_H
