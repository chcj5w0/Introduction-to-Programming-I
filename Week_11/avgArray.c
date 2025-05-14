//25101420 공호민
#define MAX 100
#include <stdio.h>



int GetIntegerArray(int a[], int n, int s); //s: sentinel
void PrintIntegerArray(int a[], int n);
double AverageIntegerArray(int a[], int n);


int main(void)
{
    int a[MAX];
    double avg;

    int n = GetIntegerArray(a, MAX, -1); // -1 is the sentinel value

    PrintIntegerArray(a, n);
    avg = AverageIntegerArray(a, n);
    printf("Average: %g\n", avg);

    return 0;
}

int GetIntegerArray(int a[], int n, int s)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
        if (a[i] == s)
        {
            return i; // Return the number of elements read
        }
    }
}

void PrintIntegerArray(int a[], int n)
{
    printf("The array is: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

double AverageIntegerArray(int a[], int n)
{
    double sum = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / n;
}