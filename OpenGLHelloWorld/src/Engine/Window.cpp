#include "Window.h"


Window::Window(ui32 width, ui32 height, const char* title)
: m_uiScreenWidth(width)
, m_uiScreenHeight(height)
, m_cWindowTitle(title) {

    // INITIALIZE GLFW

    if (!glfwInit()) {
        std::cout << "ERROR: Could not initialize GLFW\n";
        glfwTerminate();
        exit(-1);
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    // CREATE WINDOW

    m_pWindow = glfwCreateWindow(m_uiScreenWidth, m_uiScreenHeight, m_cWindowTitle, nullptr, nullptr);
    if (m_pWindow == nullptr) {
        std::cout << "Error: Could not create window\n";
        glfwTerminate();
        exit(-1);
    }

    glfwMakeContextCurrent(m_pWindow);
}

void Window::MainLoop() {
    while (!glfwWindowShouldClose(m_pWindow)) {
        glfwPollEvents();

        glfwSwapBuffers(m_pWindow);
    }
}
