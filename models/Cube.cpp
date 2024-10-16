#include "Cube.h"
#include <numeric>
#include <iostream>
void Cube::init()
{
    mVertexData.vertices.resize(36);
    /* front */
    mVertexData.vertices[0].position = glm::vec3(-0.5f, -0.5f, -0.5f);
    mVertexData.vertices[1].position = glm::vec3(0.5f, 0.5f, -0.5f);
    mVertexData.vertices[2].position = glm::vec3(0.5f, -0.5f, -0.5f);
    mVertexData.vertices[3].position = glm::vec3( 0.5f, 0.5f, -0.5f);
    mVertexData.vertices[4].position = glm::vec3(-0.5f, -0.5f, -0.5f);
    mVertexData.vertices[5].position = glm::vec3(-0.5f, 0.5f, -0.5f);

    mVertexData.vertices[0].normal = glm::vec3(0.0f, 0.0f, -1.0f);
    mVertexData.vertices[1].normal = glm::vec3(0.0f, 0.0f, -1.0f);
    mVertexData.vertices[2].normal = glm::vec3(0.0f, 0.0f, -1.0f);
    mVertexData.vertices[3].normal = glm::vec3(0.0f, 0.0f, -1.0f);
    mVertexData.vertices[4].normal = glm::vec3(0.0f, 0.0f, -1.0f);
    mVertexData.vertices[5].normal = glm::vec3(0.0f, 0.0f, -1.0f);


    mVertexData.vertices[0].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[1].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[2].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[3].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[4].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[5].color = glm::vec3(1.0f, 0.0f, 0.0f);

    /* back */
    mVertexData.vertices[6].position = glm::vec3(-0.5f, -0.5f, 0.5f);
    mVertexData.vertices[7].position = glm::vec3( 0.5f, -0.5f, 0.5f);
    mVertexData.vertices[8].position = glm::vec3( 0.5f, 0.5f, 0.5f);
    mVertexData.vertices[9].position = glm::vec3( 0.5f, 0.5f, 0.5f);
    mVertexData.vertices[10].position = glm::vec3( -0.5f, 0.5f, 0.5f);
    mVertexData.vertices[11].position = glm::vec3( -0.5f, -0.5f, 0.5f);

    mVertexData.vertices[6].normal = glm::vec3(0.0f,  0.0f,  1.0f);
    mVertexData.vertices[7].normal = glm::vec3( 0.0f,  0.0f,  1.0f);
    mVertexData.vertices[8].normal = glm::vec3( 0.0f,  0.0f,  1.0f);
    mVertexData.vertices[9].normal = glm::vec3( 0.0f,  0.0f,  1.0f);
    mVertexData.vertices[10].normal = glm::vec3( 0.0f,  0.0f,  1.0f);
    mVertexData.vertices[11].normal = glm::vec3( 0.0f,  0.0f,  1.0f);

    mVertexData.vertices[6].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[7].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[8].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[9].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[10].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[11].color = glm::vec3(1.0f, 0.0f, 0.0f);

    /* left */
    mVertexData.vertices[12].position = glm::vec3(-0.5f, 0.5f, 0.5f);
    mVertexData.vertices[13].position = glm::vec3(-0.5f, 0.5f, -0.5f);
    mVertexData.vertices[14].position = glm::vec3(-0.5f, -0.5f, -0.5f);
    mVertexData.vertices[15].position = glm::vec3(-0.5f, -0.5f, -0.5f);
    mVertexData.vertices[16].position = glm::vec3(-0.5f, -0.5f, 0.5f);
    mVertexData.vertices[17].position = glm::vec3(-0.5f, 0.5f, 0.5f);

    mVertexData.vertices[12].normal = glm::vec3(-1.0f, 0.0f, 0.0f);
    mVertexData.vertices[13].normal = glm::vec3(-1.0f, 0.0f, 0.0f);
    mVertexData.vertices[14].normal = glm::vec3(-1.0f, 0.0f, 0.0f);
    mVertexData.vertices[15].normal = glm::vec3(-1.0f, 0.0f, 0.0f);
    mVertexData.vertices[16].normal = glm::vec3(-1.0f, 0.0f, 0.0f);
    mVertexData.vertices[17].normal = glm::vec3(-1.0f, 0.0f, 0.0f);

    mVertexData.vertices[12].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[13].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[14].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[15].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[16].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[17].color = glm::vec3(1.0f, 0.0f, 0.0f);

    /* right */
    mVertexData.vertices[18].position = glm::vec3(0.5f, 0.5f, 0.5f);
    mVertexData.vertices[19].position = glm::vec3(0.5f, -0.5f, -0.5f);
    mVertexData.vertices[20].position = glm::vec3(0.5f, 0.5f, -0.5f);
    mVertexData.vertices[21].position = glm::vec3(0.5f, -0.5f, -0.5f);
    mVertexData.vertices[22].position = glm::vec3(0.5f, 0.5f, 0.5f);
    mVertexData.vertices[23].position = glm::vec3(0.5f, -0.5f, 0.5f);

    mVertexData.vertices[18].normal = glm::vec3(1.0f,  0.0f,  0.0f);
    mVertexData.vertices[19].normal = glm::vec3(1.0f,  0.0f,  0.0f);
    mVertexData.vertices[20].normal = glm::vec3(1.0f,  0.0f,  0.0f);
    mVertexData.vertices[21].normal = glm::vec3(1.0f,  0.0f,  0.0f);
    mVertexData.vertices[22].normal = glm::vec3(1.0f,  0.0f,  0.0f);
    mVertexData.vertices[23].normal = glm::vec3(1.0f,  0.0f,  0.0f);

    mVertexData.vertices[18].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[19].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[20].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[21].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[22].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[23].color = glm::vec3(1.0f, 0.0f, 0.0f);

    /* top */
    mVertexData.vertices[24].position = glm::vec3( -0.5f, -0.5f, -0.5f);
    mVertexData.vertices[25].position = glm::vec3(0.5f, -0.5f, -0.5f);
    mVertexData.vertices[26].position = glm::vec3(0.5f, -0.5f, 0.5f);
    mVertexData.vertices[27].position = glm::vec3(0.5f, -0.5f, 0.5f);
    mVertexData.vertices[28].position = glm::vec3(-0.5f, -0.5f, 0.5f);
    mVertexData.vertices[29].position = glm::vec3(-0.5f, -0.5f, -0.5f);

    mVertexData.vertices[24].normal = glm::vec3(0.0f, -1.0f,  0.0f);
    mVertexData.vertices[25].normal = glm::vec3(0.0f, -1.0f,  0.0f);
    mVertexData.vertices[26].normal = glm::vec3(0.0f, -1.0f,  0.0f);
    mVertexData.vertices[27].normal = glm::vec3(0.0f, -1.0f,  0.0f);
    mVertexData.vertices[28].normal = glm::vec3(0.0f, -1.0f,  0.0f);
    mVertexData.vertices[29].normal = glm::vec3(0.0f, -1.0f,  0.0f);

    mVertexData.vertices[24].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[25].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[26].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[27].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[28].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[29].color = glm::vec3(1.0f, 0.0f, 0.0f);


    /* bottom */
    mVertexData.vertices[30].position = glm::vec3(-0.5f, 0.5f, -0.5f);
    mVertexData.vertices[31].position = glm::vec3(0.5f, 0.5f, 0.5f);
    mVertexData.vertices[32].position = glm::vec3(0.5f, 0.5f, -0.5f);
    mVertexData.vertices[33].position = glm::vec3(0.5f, 0.5f, 0.5f);
    mVertexData.vertices[34].position = glm::vec3(-0.5f, 0.5f, -0.5f);
    mVertexData.vertices[35].position = glm::vec3(-0.5f, 0.5f, 0.5f);

    mVertexData.vertices[30].normal = glm::vec3(0.0f,  1.0f,  0.0f);
    mVertexData.vertices[31].normal = glm::vec3(0.0f,  1.0f,  0.0f);
    mVertexData.vertices[32].normal = glm::vec3(0.0f,  1.0f,  0.0f);
    mVertexData.vertices[33].normal = glm::vec3(0.0f,  1.0f,  0.0f);
    mVertexData.vertices[34].normal = glm::vec3(0.0f,  1.0f,  0.0f);
    mVertexData.vertices[35].normal = glm::vec3(0.0f,  1.0f,  0.0f);

    mVertexData.vertices[30].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[31].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[32].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[33].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[34].color = glm::vec3(1.0f, 0.0f, 0.0f);
    mVertexData.vertices[35].color = glm::vec3(1.0f, 0.0f, 0.0f);


}

OGLMesh Cube::getData()
{
    if(mVertexData.vertices.size() == 0)
    {
        init();
    }
    return mVertexData;
}

void Cube::setColor(int i, glm::vec3 color)
{
    for(int a = i*6; a < i*6 + 6; ++a){
        mVertexData.vertices[a].color = color;
    }
}

std::vector<glm::vec3> Cube::getCenters()
{
    mCenters.resize(mVertexData.vertices.size() / 6);
    for(auto i = 0; i < mCenters.size(); ++i){
        mCenters[i] = std::accumulate(mVertexData.vertices.begin()+ i*6 , mVertexData.vertices.begin() + i*6 + 6 , glm::vec3(0.0f),
                        [](const glm::vec3& sum, const OGLVertex& vertex) {
                            return sum + vertex.position;
                      }) / glm::vec3(6.0f);
    }
    return mCenters;
}

std::vector<glm::vec3> Cube::getNormals()
{
    mNormals.resize(mVertexData.vertices.size() / 6);
    for(auto i = 0; i < mNormals.size(); ++i){
        mNormals[i] = mVertexData.vertices[i * 6].normal;

    }
    return mNormals;
}
