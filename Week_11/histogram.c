//25101420 공호민


#include <stdio.h>
#define MAX 100

int GetIntegerArray(int a[], int n, int s); //s: sentinel

int GetIntegerArray(int a[], int n, int s)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == s)
        {
            return i; // Return the number of elements read
        }
    }
}

int main(void) {
    int a[MAX] = {0};
    printf("Enter integers between 0 and 100 (inclusive), -1 to stop:\n");
    int n = GetIntegerArray(a, MAX, -1); // -1 is the sentinel value

    
    printf("Histogram:\n");
    int histogram[11] = {0}; // Initialize histogram array to 0
    for(int i = 0; i < n; i++){
        if (a[i] >= 0 && a[i] <= 100) {
            histogram[a[i] / 10]++;
        }
    }
    for(int i = 0; i < 11; i++){
        i == 10 ? printf("100\t| ") : printf("%d0-%d9\t| ", i, i);
        for(int j = 0; j < histogram[i]; j++){
            printf("*");
        }
        printf("\n");
    }

}