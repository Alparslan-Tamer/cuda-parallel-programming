// size_t = size type for memory allocation
// size_t is an unsigned integer data type used to represent the size of objects in bytes.
// It is guaranteed to be big enough to contain the size of the biggest object the host system can handle.

// nothing special about size_t, it's just a typedef for unsigned long int

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {12, 24, 36, 48, 60};

    // size_t
    size_t size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of arr: %zu\n", size); // 5
    printf("Size of size_t: %zu\n", sizeof(size_t)); // 8 bytes --> 64 bit which is memory safe
    printf("int size in bytes: %zu\n", sizeof(int)); // 4 bytes --> 32 bit
    // z is used to print size_t
    // u is used to print unsigned int
    // zu is used to print size_t
    // src: https://cplusplus.com/reference/cstdio/printf/

    return 0;
}