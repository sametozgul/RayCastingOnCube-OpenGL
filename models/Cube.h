#ifndef CUBE_H
#define CUBE_H

#include "OGLRenderData.h"
class Cube
{

public:
    void init();
    OGLMesh getData();
    void setColor(int i, glm::vec3 color);
    std::vector<glm::vec3> getCenters();
    std::vector<glm::vec3> getNormals();
private:
    OGLMesh mVertexData;
    std::vector<glm::vec3> mCenters;
    std::vector<glm::vec3> mNormals;
};

#endif // CUBE_H
