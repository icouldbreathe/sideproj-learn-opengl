//
// Created by Dovydas Ciomenas on 2019-03-25.
//

#ifndef LEARNOPENGL_INPUT_H
#define LEARNOPENGL_INPUT_H


#include <GLFW/glfw3.h>

class Input {
public:
    static void KeyInput(GLFWwindow* window, int key, int scancode, int action, int mods) {
        if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
            glfwSetWindowShouldClose(window, 1);
        }
        if (key == GLFW_KEY_A && action == GLFW_PRESS) {

        }
    }

private:
    Input() {}
    ~Input() {}

};


#endif //LEARNOPENGL_INPUT_H
