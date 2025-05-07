//25101420 공호민 
#include <stdio.h>

int main() {
    int i;
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    // Display the elements of the array
    for (i = 0; i < 5; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
    // Display the elements of the array in reverse order
    for (i = 4; i >= 0; i--) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}
