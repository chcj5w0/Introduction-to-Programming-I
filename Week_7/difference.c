//25101420 공호민
#include <stdio.h>

double Difference(double, double);

int main(void){
    double a, b;
    printf("임의의 두 수를 입력하세요: ");
    scanf("%lf %lf", &a, &b);
    printf("두 수의 차는 %g입니다.\n", Difference(a, b));

    return 0;

}


double Difference(double num1, double num2){
    return num1 > num2 ? num1 - num2 : num2 - num1;
}