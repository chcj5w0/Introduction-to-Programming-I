//25101420 공호민
#include <stdio.h>

int second_conversion(int second);

int main(void){

    int second;
    printf("초? ");
    scanf("%d", &second);
    second_conversion(second);

    return 0;
}


int second_conversion(int total_second){

    int hour, minute, second;

    printf("%d초는 ", total_second);

    hour = total_second / 3600;
    total_second %= 3600;

    minute = total_second / 60;
    total_second %= 60;

    second = total_second;

    printf("%d시간 %d분 %d초입니다.\n", hour, minute, second);
}