#include "led_strip.hpp"

#include <iostream>

void drawRainbow(bool inverse) {
    char colors[STRIP_HEIGHT][STRIP_WIDTH];
    for (int x = 0; x < STRIP_WIDTH; x += 4) {
        for (int i = 0; i < 4; i++) {
            int y = -1;
            if (inverse) {
                colors[++y][x + i] = NONE;
            }
            colors[++y][x + i] = RED;
            colors[++y][x + i] = ORANGE;
            colors[++y][x + i] = YELLOW;
            colors[++y][x + i] = GREEN;
            colors[++y][x + i] = CYAN;
            colors[++y][x + i] = BLUE;
            colors[++y][x + i] = PURPLE;
            if (!inverse) {
                colors[++y][x + i] = NONE;
            }
        }
        inverse = !inverse;
    }
    for (int i = 0; i < STRIP_HEIGHT; i++) {
        for (int j = 0; j < STRIP_WIDTH; j++) {
            std::cout << colors[i][j];
        }
        std::cout << std::endl;
    }
}