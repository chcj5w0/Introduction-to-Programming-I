//25101420 공호민
#include <stdio.h>


int main() {
    int i;
    int arr[5];
    // Input elements into the array
    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    // Display the elements of the array
    printf("You entered: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}