#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include <stdio.h>

const char *ascii = " .:-=+*#%@";

int main() {
    int width, height, channels;
    unsigned char *img = stbi_load("image.jpg", &width, &height, &channels, 1);

    if (!img) {
        printf("Failed to load image\n");
        return 1;
    }

    int ascii_len = 10;

    int new_width = 150;              // control size here
    int step_x = width / new_width;  // horizontal scaling
    int step_y = step_x * 2;         // vertical scaling (fix aspect ratio)

    for (int y = 0; y < height; y += step_y) {
        for (int x = 0; x < width; x += step_x) {

            int pixel = img[y * width + x];
            int index = (pixel * (ascii_len - 1)) / 255;

            printf("%c", ascii[index]);
        }
        printf("\n");
    }

    stbi_image_free(img);
    return 0;
}  

