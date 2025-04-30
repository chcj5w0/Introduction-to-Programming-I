#include <stdio.h>


int main(void) {

    int arr[] = {19, 2, 25, 92, 36, 45};
    int min, max, sum = 0;
    double avg, var = 0;

    for(int i = 0; i < 6; i++)
        printf("%d ", arr[i]);

    min, max = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    printf("\nmax: %d, min: %d\n", max, min);

    for(int i = 0; i < 6; i++)
        sum += arr[i];
    avg = sum / 6.0;

    printf("average: %g\n", avg);

    for(int i = 0; i < 6; i++)
        var += (avg - arr[i]) * (avg - arr[i]);
    var /= 6;

    printf("variation: %g\n", var);


    return 0;
}