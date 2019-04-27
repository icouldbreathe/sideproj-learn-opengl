#include "Test3D.h"


#include "Renderer.h"
#include <GLFW/glfw3.h>
#include <imgui/imgui.h>

#include "Buffer/VertexBufferLayout.h"
#include "Buffer/VertexBuffer.h"
#include "Buffer/VertexArray.h"
#include "Buffer/IndexBuffer.h"


#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <State.h>
#include <Camera.h>



namespace test {

    Test3D::Test3D()
    : m_Proj(glm::perspective(glm::radians(45.0f), (float)state::w_width / (float)state::w_height, 0.1f, 100.0f))
    , m_View(glm::mat4(1.0f))
    , m_TranslationA(0, 0, 0)
    , m_Camera(45.0f, (float)state::w_width/(float)state::w_height, 0.1f, 100.0f){



        float cube[] = {
                -1.0f,-1.0f,-1.0f, // triangle 1 : begin
                -1.0f,-1.0f, 1.0f,
                -1.0f, 1.0f, 1.0f, // triangle 1 : end
                1.0f, 1.0f,-1.0f, // triangle 2 : begin
                -1.0f,-1.0f,-1.0f,
                -1.0f, 1.0f,-1.0f, // triangle 2 : end
                1.0f,-1.0f, 1.0f,
                -1.0f,-1.0f,-1.0f,
                1.0f,-1.0f,-1.0f,
                1.0f, 1.0f,-1.0f,
                1.0f,-1.0f,-1.0f,
                -1.0f,-1.0f,-1.0f,
                -1.0f,-1.0f,-1.0f,
                -1.0f, 1.0f, 1.0f,
                -1.0f, 1.0f,-1.0f,
                1.0f,-1.0f, 1.0f,
                -1.0f,-1.0f, 1.0f,
                -1.0f,-1.0f,-1.0f,
                -1.0f, 1.0f, 1.0f,
                -1.0f,-1.0f, 1.0f,
                1.0f,-1.0f, 1.0f,
                1.0f, 1.0f, 1.0f,
                1.0f,-1.0f,-1.0f,
                1.0f, 1.0f,-1.0f,
                1.0f,-1.0f,-1.0f,
                1.0f, 1.0f, 1.0f,
                1.0f,-1.0f, 1.0f,
                1.0f, 1.0f, 1.0f,
                1.0f, 1.0f,-1.0f,
                -1.0f, 1.0f,-1.0f,
                1.0f, 1.0f, 1.0f,
                -1.0f, 1.0f,-1.0f,
                -1.0f, 1.0f, 1.0f,
                1.0f, 1.0f, 1.0f,
                -1.0f, 1.0f, 1.0f,
                1.0f,-1.0f, 1.0f
        };


        GLCall(glEnable(GL_DEPTH_TEST));
        GLCall(glEnable(GL_BLEND));
        GLCall(glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA));
        glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

        m_VAO = std::make_unique<VertexArray>();
        m_VB = std::make_unique<VertexBuffer>(cube, sizeof(cube));
        VertexBufferLayout layout;
        layout.Push<float>(3);
        m_VAO->AddBuffer(*m_VB, layout);


        m_Shader = std::make_unique<Shader>("res/shaders/basicColor.shader");
        m_Shader->Bind();


        m_View = glm::translate(m_View, glm::vec3(0.0f, 0.0f, -10.0f));

    }

    Test3D::~Test3D() {

    }

    void Test3D::OnUpdate(float deltaTime) {

    }

    void Test3D::OnRender() {
        GLCall(glClearColor(0.0f, 0.0f, 0.0f, 1.0f));
        GLCall(glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT));

        m_VAO->Bind();


        glm::mat4 model = glm::mat4(1.0f);

        glm::mat4 mvp = Camera->m_Proj * Camera->m_View * model;

        m_Shader->Bind();
        m_Shader->SetUniformMatrix4fv("u_MVP", mvp);
        m_Shader->SetUniform4fv("u_Color", glm::vec4(0.8f, 0.0f, 0.1f, 1.0f));

        glDrawArrays(GL_TRIANGLES, 0, 36);


    }

    void Test3D::OnImGuiRender() {
        ImGui::Separator();
        ImGui::Text("Camera");
        ImGui::Separator();
        ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
    }
}
