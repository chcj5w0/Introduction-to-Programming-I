//25101420 공호민

#include <stdio.h>
int Find(int a[], int n, int x); // Function prototype

int Find(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i; // Return the index of the first occurrence
        }
    }
    return -1; // Return -1 if not found
}


int main(void)
{
    int a[5] = {1, 2, 3, 4, 4};
    int x;
    printf("Enter the element to find: ");
    scanf("%d", &x);
    int index;

    index = Find(a, 5, x);
    if (index != -1)
        printf("Element %d found at index %d\n", x, index);
    else
        printf("Element %d not found\n", x);

    return 0;
}