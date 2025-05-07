//25101420 공호민
//list[10]
//if key is in list, "exists"

#include <stdio.h>


int main() {
    int list[10] = {1, 2, 3, 4, 5, 6, 5, 8, 9, 10};
    int key, isFound = 0;
    
    printf("Enter a number to search for: ");
    scanf("%d", &key);
    
    for (int i = 0; i < 10; i++) {
        if (list[i] == key) {
            printf("Number %d exists in the list.\n", key);
            isFound = 1;
            break;
        }
    }

    if (!isFound) {
        printf("Number %d does not exist in the list.\n", key);
    }
    
    return 0;
}