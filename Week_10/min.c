//25101420 공호민
#include <stdio.h>

int main() {
    int i, minIndex = 0;
    double arr[5] = {3.4, 7.8, 5.6, 9.0, 1.2};
    double min = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] < min){
            min = arr[i];
            minIndex = i;
        }
    }
    printf("Minimum element: %.2f, Index: %d", min, minIndex);

    return 0;
}