#include <stdio.h>

typedef struct {
    float x;
    float y;
} Point;

int main() {
    Point p = {1.0, 2.0};
    printf("Size of Point: %zu\n", sizeof(Point)); // 8 bytes

    return 0;
}

// You can do same thing with C++ either