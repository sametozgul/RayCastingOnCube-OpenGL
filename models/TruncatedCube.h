#ifndef TRUNCATEDCUBE_H
#define TRUNCATEDCUBE_H

#include "OGLRenderData.h"

class TruncatedCube
{
public:
    void init();
private:
    float t = 0.1f;
    OGLMesh mVertexData;
    glm::vec3 truncateVertex(const glm::vec3& v, float t);
};
#endif // TRUNCATEDCUBE_H
