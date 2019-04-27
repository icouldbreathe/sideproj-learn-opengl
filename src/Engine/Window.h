//
// Created by Dovydas Ciomenas on 2019-03-13.
//

#ifndef PROTOTYPE_WINDOW_H
#define PROTOTYPE_WINDOW_H

#include <glfw/glfw3.h>
#include <iostream>

typedef uint32_t ui32;

class Window {
public:
    Window(ui32 width, ui32 height, const char* title);

    void MainLoop();

    GLFWwindow* getWindow() {
        return m_pWindow;
    }

private:
    ui32 m_uiScreenWidth, m_uiScreenHeight;
    const char* m_cWindowTitle = nullptr;
    GLFWwindow* m_pWindow = nullptr;


};

#endif //PROTOTYPE_WINDOW_H
