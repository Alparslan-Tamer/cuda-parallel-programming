#include <stdio.h> // standart input output header file (printf, scanf)

// & "address of" operator
// * "value at" operator

int main() {
    int x = 10;
    int* ptr = &x; // & is used to het the memory address of a variable (x)
    printf("Address of x: %p\n", ptr); // %p is used to print the memory address of a variable, Output: memory address of x
    printf("Value of x: %d\n", *ptr); // %d is used to print the value of a variable, Output: 10
    // * in the prev line is used to get the value of 
    // the memory address stored in ptr (which is the memory address of x)
    return 0;
}