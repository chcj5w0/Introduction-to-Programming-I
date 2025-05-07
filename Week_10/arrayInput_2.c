//25101420 공호민
#include <stdio.h>

//max: 5
//when input is -1, terminate

int main() {
    int i, n = 0;
    int arr[5];
    // Input elements into the array
    printf("Enter up to 5 integers (-1 to stop): ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == -1) {
            break;
        }
        n++;
    }
    // Display the elements of the array
    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}