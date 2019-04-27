#include "TestTexture2D.h"
#include "State.h"

#include "Renderer.h"
#include <imgui/imgui.h>

#include "Buffer/VertexBufferLayout.h"
#include "Buffer/VertexBuffer.h"
#include "Buffer/VertexArray.h"
#include "Buffer/IndexBuffer.h"
#include "Texture.h"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>


namespace test {

    TestTexture2D::TestTexture2D()
    : m_Proj(glm::ortho(0.0f, 1024.0f, 0.0f, 640.0f, -1.0f, 1.0f))
    , m_View(glm::mat4(1.0f))
    , m_TranslationA(200, 200, 0)
    , m_TranslationB(400, 200, 0) {


        float positions[] = {
             -50.0f, -50.0f, 0.0f, 0.0f,
              50.0f, -50.0f, 1.0f, 0.0f,
              50.0f,  50.0f, 1.0f, 1.0f,
             -50.0f,  50.0f, 0.0f, 1.0f
        };

        unsigned int indices[] = {
            0, 1, 2,
            2, 3, 0
        };

        GLCall(glEnable(GL_BLEND));
        GLCall((glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA)));

        m_VAO = std::make_unique<VertexArray>();
        m_VB = std::make_unique<VertexBuffer>(positions, 4 * 4 * sizeof(float));
        VertexBufferLayout layout;

        layout.Push<float>(2);
        layout.Push<float>(2);

        m_VAO->AddBuffer(*m_VB, layout);
        m_IB = std::make_unique<IndexBuffer>(indices, 6);

        m_Shader = std::make_unique<Shader>("res/shaders/basic.shader");
        m_Shader->Bind();


        m_stoneTexture = std::make_unique<Texture>("res/textures/stones.bmp");
        m_catTexture = std::make_unique<Texture>("res/textures/cat.png");


    }

    TestTexture2D::~TestTexture2D() {

    }

    void TestTexture2D::OnUpdate(float deltaTime) {

    }

    void TestTexture2D::OnRender() {
        GLCall(glClearColor(0.0f, 0.0f, 0.0f, 1.0f));
        GLCall(glClear(GL_COLOR_BUFFER_BIT));

        Renderer renderer;

        {
            m_stoneTexture->Bind(0);
            m_Shader->SetUniform1i("u_Texture", 0);
            glm::mat4 model = glm::translate(glm::mat4(1.0), m_TranslationA);
            glm::mat4 mvp = m_Proj * m_View * model;
            m_Shader->SetUniformMatrix4fv("u_MVP", mvp);
            renderer.Draw(*m_VAO, *m_IB, *m_Shader);
        }

        {

            m_catTexture->Bind(1);
            m_Shader->SetUniform1i("u_Texture", 1);
            glm::mat4 model = glm::translate(glm::mat4(1.0), m_TranslationB);
            glm::mat4 mvp = m_Proj * m_View * model;
            m_Shader->SetUniformMatrix4fv("u_MVP", mvp);
            renderer.Draw(*m_VAO, *m_IB, *m_Shader);
        }


    }

    void TestTexture2D::OnImGuiRender() {
        ImGui::Separator();
        ImGui::Text("Translation A");
        ImGui::SliderFloat("Xa",&m_TranslationA.x, 0.0f, 1024.0f);
        ImGui::SliderFloat("Ya",&m_TranslationA.y, 0.0f, 640.0f);
        ImGui::SliderFloat("Za",&m_TranslationA.z, -1.0f, 1.0f);
        ImGui::Separator();
        ImGui::Text("Translation B");
        ImGui::SliderFloat("Xb",&m_TranslationB.x, 0.0f, 1024.0f);
        ImGui::SliderFloat("Yb",&m_TranslationB.y, 0.0f, 640.0f);
        ImGui::SliderFloat("Zb",&m_TranslationB.z, -1.0f, 1.0f);
        ImGui::Separator();
        ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
    }
}
