#include "TruncatedCube.h"



void TruncatedCube::init()
{
    glm::vec3 cubeVertices[8] = {
        glm::vec3(-1.0f, -1.0f, -1.0f), // 0
        glm::vec3( 1.0f, -1.0f, -1.0f), // 1
        glm::vec3( 1.0f,  1.0f, -1.0f), // 2
        glm::vec3(-1.0f,  1.0f, -1.0f), // 3
        glm::vec3(-1.0f, -1.0f,  1.0f), // 4
        glm::vec3( 1.0f, -1.0f,  1.0f), // 5
        glm::vec3( 1.0f,  1.0f,  1.0f), // 6
        glm::vec3(-1.0f,  1.0f,  1.0f)  // 7
    };
    glm::vec3 truncatedVertices[8];
    for (int i = 0; i < 8; ++i) {
        truncatedVertices[i] = truncateVertex(cubeVertices[i], t);
    }
    mVertexData.vertices.resize(6);
    mVertexData.vertices[0].position = truncatedVertices[0];
    mVertexData.vertices[1].position = truncatedVertices[1];
    mVertexData.vertices[2].position = truncatedVertices[2];
    mVertexData.vertices[3].position = truncatedVertices[3];
    mVertexData.vertices[4].position = truncatedVertices[4];
    mVertexData.vertices[5].position = truncatedVertices[5];
}

glm::vec3 TruncatedCube::truncateVertex(const glm::vec3 &v, float t)
{
    return glm::mix(glm::vec3(0.0f, 0.0f, 0.0f), v, 1.0f - t);
}
