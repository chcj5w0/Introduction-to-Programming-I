//25101420 공호민
#include <stdio.h>

void DisplayMultiplicationTable(void);
void DisplayMultiplicationTable(void)
{
    for(int i = 2; i <= 9; i++){
        for(int j = 1; j <= 9; j++)
            printf("%2d x%2d = %2d\n", i, j, i * j);
        printf("\n");
    }
}
int main(void)
{
    DisplayMultiplicationTable();
    
    return 0;
}