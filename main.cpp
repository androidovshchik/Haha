#include "led_strip.hpp"

#include <iostream>

int main(void) {
    std::cout << "Not inversed\n";
    drawRainbow(false);
    std::cout << "Inversed\n";
    drawRainbow(true);
    return 0;
}