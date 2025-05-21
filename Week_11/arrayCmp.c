//25101420 공호민
#include <stdio.h>

int ArrayCmp(int a1[], int a2[], int size);

int main(void)
{
    int a1[5] = {1, 2, 3, 4, 5};
    int a2[5] = {1, 2, 3, 4, 5};
    int result;

    result = ArrayCmp(a1, a2, 5);
    if (result == 1)
        printf("Arrays are equal\n");
    else
        printf("Arrays are not equal\n");

    return 0;
}

int ArrayCmp(int a1[], int a2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a1[i] != a2[i])
        {
            return 0; // Arrays are not equal
        }
    }
    return 1; // Arrays are equal
}