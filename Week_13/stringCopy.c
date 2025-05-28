//25101420 공호민
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* StringCopy(char* src);

int main(void) {

    char* dst;
    dst = StringCopy("Hello, World!");
    printf("%s\n", dst);
    free(dst); // Free the allocated memory
    return 0;
}


char* StringCopy(char* src) {
    // Allocate memory for the destination string
    char* dst = (char*)malloc(strlen(src) + 1); // Can we use (void*) instead of (char*)?
    // Yes, we can use (void*) instead of (char*), but it's more common to use (char*) for clarity in this context.
    // Check if memory allocation was successful
    if (dst == NULL) {
        printf("Memory allocation failed\n");
        return NULL; // Handle memory allocation failure
    }
    // Copy the source string to the destination
    strcpy(dst, src);
    return dst; // Return the pointer to the copied string
}