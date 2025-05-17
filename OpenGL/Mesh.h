#pragma once
#include <glad/glad.h>
#include <vector>

class Mesh
{
public:
    Mesh(const std::vector<float>& vertices);
    ~Mesh();

    void draw() const;

private:
    unsigned int VAO;
    unsigned int VBO;
    size_t vertexCount;
};
