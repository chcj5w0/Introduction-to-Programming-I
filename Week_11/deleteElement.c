//25101420 공호민
#include <stdio.h>

int Delete(int a[], int s, int p); //returns the number of elements in the array after deletion

int Delete(int a[], int s, int p){

    for (int i = p; i < s - 1; i++)
    {
        a[i] = a[i + 1]; // Shift elements to the left
    }
    return s - 1; // Return the new size of the array
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int p;
    printf("Enter the index of the element to delete: ");
    scanf("%d", &p);
    int newSize;

    newSize = Delete(a, 5, p);
    printf("Array after deletion: ");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}