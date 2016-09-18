#ifndef _GLVERTEXDECLERATION_H
#define _GLVERTEXDECLERATION_H

#include "../../include/graphics/VertexDecleration.h"
#include <GL/glew.h>
#include <SDL_opengl.h>

class GLVertexDecleration:public IVertexDecleration
{
public:
    GLVertexDecleration();
    ~GLVertexDecleration();

    void setVertexFormat(VertexFormat *pFormat, int count);

    void bind();

    void destroy();
private:
    GLuint m_VAO;
};

#endif