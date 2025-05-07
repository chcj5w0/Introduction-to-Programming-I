//25101420 공호민

#include <stdio.h>


int main() {
    
    int list[10] = {1, 2, 3, 4, 5, 6, 5, 8, 9, 10};
    int key, index = -1;
    
    printf("Enter a number to search for: ");
    scanf("%d", &key);
    
    for(int i = 0; i < 10; i++) {
        if(list[i] == key) {
            index = i; // Store the index of the found element
            break;
        }
    }    
    if (index != -1) {
        printf("Number %d found at index %d.\n", key, index);
    } else {
        printf("없다 \n");
    }
    
    return 0;
}