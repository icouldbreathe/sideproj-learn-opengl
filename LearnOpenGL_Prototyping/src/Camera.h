//
// Created by Dovydas Ciomenas on 2019-03-25.
//

#ifndef LEARNOPENGL_CAMERA_H
#define LEARNOPENGL_CAMERA_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Camera {
private:
    float m_Fovy;
    float m_Aspect;
    float m_zNear;
    float m_zFar;
public:
    glm::mat4 m_Proj;
    glm::mat4 m_View;

    Camera(float fovy, float aspect, float zNear, float zFar)
    : m_Fovy(fovy)
    , m_Aspect(aspect)
    , m_zNear(zNear)
    , m_zFar(zFar)
    , m_Proj(glm::perspective(glm::radians(m_Fovy), m_Aspect, m_zNear, m_zFar))
    , m_View(glm::mat4(1.0f)){


    }

};


#endif //LEARNOPENGL_CAMERA_H
