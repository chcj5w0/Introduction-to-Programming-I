//25101420 공호민


#include <stdio.h>
#define PI 3.14159265

double get_circle_area(double);
double get_cylinder_volume(double, double);

int main(void) {

    double r, h;

    scanf("%lf %lf", &r, &h);
    
    double vol = get_cylinder_volume(r, h);
    
    printf("%.2f\n", vol);

    return 0;
}

double get_circle_area(double r){

    double area = PI * r * r;

    return area;
}

double get_cylinder_volume(double radius, double height){

    double area = get_circle_area(radius);

    double volume = area * height;

    return volume;
}
