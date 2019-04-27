#ifndef ENGINE_H
#define ENGINE_H

#include <glad/glad.h> // include first
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/random.hpp>

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

#include "Utility/shader.h"
#include "Utility/resourcemanager.h"
#include "Utility/Camera.h"

class Engine {
public:

    Engine(uint32_t SCR_WIDTH, uint32_t SCR_HEIGHT);

    void Run();

    uint32_t GetScreenWidth() {
        return SCR_WIDTH;
    }

    uint32_t GetScreenHeight() {
        return SCR_HEIGHT;
    }

    Camera GetCamera() {
        return *camera;
    }


    ~Engine();



private:

    Engine* windowUserPointer;

    const uint32_t SCR_WIDTH;
    const uint32_t SCR_HEIGHT;
    GLFWwindow* window;
    Camera* camera;
    float lastX;
    float lastY;
    bool firstMouse;
    GLfloat deltaTime;
    GLfloat lastFrame;

    unsigned int VAO, VBO, EBO;

    void framebufferSizeCallback(GLFWwindow* window, int width, int height);
    void mouseCallback(GLFWwindow* window, double xpos, double ypos);


    void Init();
    void processInput();


};

#endif // ENGINE_H
