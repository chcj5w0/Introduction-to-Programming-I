//25101420 공호민


#include <stdio.h>
#define PI 3.14159265

double get_circle_area(double);

int main(void) {

    double area1 = get_circle_area(1);
    double area10 = get_circle_area(10);

    printf("%g\n", area1);
    printf("%g\n", area10);

    return 0;
}

double get_circle_area(double r){

    double area = PI * r * r;

    return area;
}