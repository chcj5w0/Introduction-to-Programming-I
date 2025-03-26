//25101420 공호민


#include <stdio.h>

double GetReal(void);
char GetChar(void);

int main(void) {

    double r1, r2;
    char c1;

    printf("첫 번째 실수는?");
    r1 = GetReal();
    printf("두 번째 실수는?");
    r2 = GetReal();
    printf("하나의 문자는?");
    c1 = GetChar();

    printf("[%10g]\n", r1);
    printf("[%10g]\n", r2);
    printf("[%10c]\n", c1);

    return 0;
}


double GetReal(void){

    double real;

    scanf("%lf", &real);

    return real;
}


char GetChar(void){

    char c;

    scanf(" %c", &c);

    return c;
}