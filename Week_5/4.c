//25101420 공호민
#include <stdio.h>

void coin_exchange(int total);

int main(void){
    int money;
    printf("교환할 돈은 얼마입니까? ");
    scanf("%d", &money);
    coin_exchange(money);

    return 0;
}

void coin_exchange(int total){

    printf("%-21s: %d개\n", "오백원짜리", total / 500);
    total %= 500;

    printf("%-20s: %d개\n", "백원짜리", total / 100);
    total %= 100;

    printf("%-21s: %d개\n", "오십원짜리", total / 50);
    total %= 50;

    printf("%-20s: %d개\n", "십원짜리", total / 10);
    total %= 10;

    printf("%-22s: %d개\n", "교환후 남은돈", total);
}