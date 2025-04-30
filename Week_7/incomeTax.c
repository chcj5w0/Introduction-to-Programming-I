//25101420 공호민
#include <stdio.h>


int IncomeTax(int);


int main(void){

    int income;
    printf("수입을 입력하세요(만 원 단위): ");
    scanf("%d", &income);
    printf("주어진 수입에 대한 세액은 %d만 원 입니다.\n", IncomeTax(income));

    return 0;
}


int IncomeTax(int income){
    double taxrate;
    if(income <= 1000) taxrate = 0.008;
    else if(income <= 4000) taxrate = 0.17;
    else if(income <= 8000) taxrate = 0.26;
    else taxrate = 0.35;
    int tax = (int)(income * taxrate);
    return tax;
}