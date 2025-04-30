#include <stdio.h>



int main(void) {


    char strings[5][100];

    for(int i = 0; i < 5; i++){
        scanf("%s", &strings[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%s\n", strings[i]);
    }
    
}