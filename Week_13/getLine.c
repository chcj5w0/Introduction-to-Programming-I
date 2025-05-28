//25101420 공호민
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* GetLine(void);

int main(void) {
    char* line = GetLine();
    if (line != NULL) {
        printf("You entered: %s\n", line);
        free(line); // Free the allocated memory
    } else {
        printf("Failed to read line.\n");
    }
    return 0;

}

char* GetLine(void) {
    char msg[100];
    printf("Enter a line of text: ");
    scanf(" %99[^\n]", msg); // Read a line of text, up to 99 characters
    int len = strlen(msg);
    char* line = (char*)malloc((len + 1) * sizeof(char)); // Allocate memory for the line
    if (line == NULL) {
        return NULL; // Memory allocation failed
    }
    strcpy(line, msg); // Copy the input string to the allocated memory
    return line; // Return the pointer to the allocated memory
}