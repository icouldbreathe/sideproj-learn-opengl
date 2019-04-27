#ifndef TEXTURE_H
#define TEXTURE_H

#include <glad/glad.h>

class Texture {
public:

    GLuint ID;
    unsigned int texture;

    void GenerateTexture(int width, int height, int nrChannels, unsigned char *data);

    Texture();
};

#endif // TEXTURE_H
