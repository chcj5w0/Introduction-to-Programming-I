//25101420 공호민
#include <stdio.h>

void DisplayMultiplicationTable(void);

void DisplayMultiplicationTable(void)
{
    //2 ~ 9단까지 2차원적으로 배치

    //2단 3단 4단 5단
    for(int i = 1; i <= 9; i++){
        for(int j = 2; j <= 5; j++)
            printf("%2d x%2d = %2d\t", j, i, j * i);
        printf("\n");
    }
    printf("\n");
    //6단 7단 8단 9단
    for(int i = 1; i <= 9; i++){
        for(int j = 6; j <= 9; j++)
            printf("%2d x%2d = %2d\t", j, i, j * i);
        printf("\n");
    }
}

int main(void)
{
    DisplayMultiplicationTable();
    
    return 0;
}