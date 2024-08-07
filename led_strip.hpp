#ifndef LED_STRIP_H
#define LED_STRIP_H

#define STRIP_WIDTH 32
#define STRIP_HEIGHT 8
#define LED_COUNT (STRIP_WIDTH * STRIP_HEIGHT)

#define RED_R 255
#define RED_G 0
#define RED_B 0
#define RED 'R'

#define ORANGE_R 255
#define ORANGE_G 165
#define ORANGE_B 0
#define ORANGE 'O'

#define YELLOW_R 255
#define YELLOW_G 255
#define YELLOW_B 0
#define YELLOW 'Y'

#define GREEN_R 0
#define GREEN_G 255
#define GREEN_B 0
#define GREEN 'G'

#define CYAN_R 0
#define CYAN_G 255
#define CYAN_B 255
#define CYAN 'C'

#define BLUE_R 0
#define BLUE_G 0
#define BLUE_B 255
#define BLUE 'B'

#define PURPLE_R 128
#define PURPLE_G 0
#define PURPLE_B 128
#define PURPLE 'P'

#define NONE_R 0
#define NONE_G 0
#define NONE_B 0
#define NONE 'N'

void drawRainbow(bool inverse);

#endif // LED_STRIP_H