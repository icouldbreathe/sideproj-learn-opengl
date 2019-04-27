#version 330 core
layout (location = 0) in vec3 aPos;

out vec3 ourColor;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

uniform vec3 aColor;
uniform mat4 transform;

void main()
{
   //gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);
   //gl_Position = transform *  vec4(aPos, 1.0);
   gl_Position = projection * view * model * vec4(aPos, 1.0);
   ourColor = aColor;
}
