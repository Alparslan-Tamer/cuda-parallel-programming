#include <stdio.h>

int main() {
    // c-style type casting
    float f = 69.69;
    printf("f: %f\n", f);
    int i = (int)f;
    printf("i: %d\n", i); // Output: 69, rounded down since decimal is truncated (deletes the .69 part)
    char c = (char)i;
    printf("c: %c\n", c); // Output: E, ASCII value of 69

    return 0;
}