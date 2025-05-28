#include <stdio.h>

// This program demonstrates the use of pointers in C
// It initializes an integer variable, creates a pointer to it,
// and prints the value of the variable, the address of the variable,
// the value at the pointer, and the address stored in the pointer.
// What is a pointer?
// A pointer is a variable that stores the address of another variable.
// In this case, we are using a pointer to store the address of an integer variable.
// Why use pointers?
// Pointers are used for dynamic memory allocation, efficient array handling,
// and to allow functions to modify variables outside their scope.

int main(void) {
    int a = 10;
    int *p = &a; // Pointer p points to the address of variable a

    printf("Value of a: %d\n", a);        // Output: 10
    printf("Address of a: %p\n", (void*)&a); // Output: Address of a
    printf("Value at pointer p: %d\n", *p); // Output: 10
    printf("Address stored in pointer p: %p\n", (void*)p); // Output: Address of a
    
    
    return 0;
}