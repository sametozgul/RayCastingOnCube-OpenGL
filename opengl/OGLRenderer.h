#ifndef OGLRENDERER_H
#define OGLRENDERER_H

#include<memory>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Timer.h"
#include "OGLRenderData.h"
#include "Shader.h"
#include "Cube.h"
#include "VertexBuffer.h"
#include "UserInterface.h"
#include "UniformBuffer.h"
#include "Camera.h"
class OGLRenderer
{
public:
    OGLRenderer(GLFWwindow* win);
    bool init(unsigned int width, unsigned int height);
    void resize(unsigned int width, unsigned int height);
    void handleMousePressEvents(double xPos, double yPos);
    void handleMouseReleasedEvents();
    void draw();
    void cleanUp();

private:
    Timer mFrameTimer{};
    OGLRenderData mRenderData{};
    Shader mShader{};
    VertexBuffer mVertexBuffer{};
    UserInterface mUserInterface{};
    UniformBuffer mUniformBuffer{};
    Camera mCamera{};
    glm::mat4 mModelMatrix;
    glm::mat4 mViewMatrix;
    glm::mat4 mProjectionMatrix;

    std::unique_ptr<Cube> mCube = nullptr;
    double mLastTickTime = 0.0;
    bool mFirstMouse = false;
    std::vector<glm::vec3> centers;
    std::vector<glm::vec3> normals;
    glm::vec3 getRay(float xPos, float yPos);
    bool intersectRayPlane(const glm::vec3 &rayOrigin, const glm::vec3 &rayDirection, const glm::vec3 &planeNormal, const glm::vec3 &planePoint, float &t);
    bool intersectDisc(const glm::vec3 &rayOrigin, const glm::vec3 &rayDirection, const glm::vec3 &planeNormal, const glm::vec3 &planePoint, const float &radius,float& t);
};

#endif // OGLRENDERER_H
