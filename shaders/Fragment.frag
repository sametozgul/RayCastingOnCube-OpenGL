#version 460 core
out vec4 frag_colour;
in vec3 outColor;
void main()
{
    frag_colour = vec4 (outColor, 1.0);
}
