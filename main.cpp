#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cstring>
#include <cmath>
#include <algorithm>

#include "Framebuffer.h"
#include "Color.h"
#include "Vertex.h"

void render(Framebuffer &framebuffer)
{
    // Definir colores
    Color white = Color(255, 255, 255);
    Color red = Color(255, 0, 0);
    Color yellow = Color(255, 255, 0);
    Color blue = Color(0, 0, 255);
    Color green = Color(0, 255, 0);
    Color black = Color(0, 0, 0);

    // Definir polígono 1
    std::vector<Vertex> p1 = {
        {165, 380},
        {185, 360},
        {180, 330},
        {207, 345},
        {233, 330},
        {230, 360},
        {250, 380},
        {220, 385},
        {205, 410},
        {193, 383}
    };

    // Dibujar polígono 1 con color amarillo y borde blanco
    framebuffer.polygon(p1, white);
    framebuffer.fillPolygon(p1, yellow);

    // Definir polígono 2
    std::vector<Vertex> p2 = {
        {321, 335},
        {288, 286},
        {339, 251},
        {374, 302}
    };

    // Dibujar polígono 2 con color azul y borde blanco
    framebuffer.polygon(p2, white);
    framebuffer.fillPolygon(p2, blue);

    // Renderizar búfer de fotogramas
    framebuffer.renderBuffer();
}

int main()
{
    // Crear objeto Framebuffer
    Framebuffer framebuffer(800, 420, Color(0, 0, 0));

    // Dibujar polígonos
    render(framebuffer);

    return 0;
}
