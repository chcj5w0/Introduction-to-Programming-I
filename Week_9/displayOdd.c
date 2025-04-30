//25101420 공호민 
#include <stdio.h>

void DisplayOdd(int s, int e, int m);

int main() {
    DisplayOdd(1, 100, 5);
    return 0;
}

void DisplayOdd(int s, int e, int m) {
    for(int i = s; i <= e; i++) {
        if (i % 2 != 0 && i % m != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}