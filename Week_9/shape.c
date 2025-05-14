//25101420 공호민
#include <stdio.h>


void DisplayTriangle(int);

void DisplayTriangle(int h)
{
    for(int i = 1; i <= h; i++){
        // 공백 출력
        for(int j = 1; j <= h - i; j++){
            printf(" ");
        }
        // 별 출력
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}



int main(void)
{
    int h;
    printf("삼각형의 높이를 입력하세요: ");
    scanf("%d", &h);
    DisplayTriangle(h);
    return 0;
}