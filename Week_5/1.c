//25101420 공호민
#include <stdio.h>

void DivideReal(double real);

int main(void){
    double input;
    printf("실수: ");
    scanf("%lf", &input);
    DivideReal(input);
    return 0;
}


void DivideReal(double real){
    
    int integer_parts;
    double fractional_parts;

    integer_parts = (int)real;
    fractional_parts = real - integer_parts;

    printf("정수부는 %d이고 소수부는 %g이다.\n", integer_parts, fractional_parts);
}