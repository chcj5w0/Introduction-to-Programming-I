//25101420 공호민 
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int year;
    double mileage;
} Car;

Car InputCarInfo(void);
void ShowCarInfo(Car);
Car addMileage(Car, double);
void isOlderThanYear(Car);

int main(void) {
    Car car = InputCarInfo();
    ShowCarInfo(car);
    
    double additionalMileage;
    printf("Enter additional mileage to add: ");
    scanf("%lf", &additionalMileage);
    addMileage(car, additionalMileage);
    
    ShowCarInfo(car);
    
    isOlderThanYear(car);
    
    return 0;
}

Car InputCarInfo(void) {
    Car car;
    printf("Enter car name: ");
    scanf("%s", car.name);
    printf("Enter car year: ");
    scanf("%d", &car.year);
    printf("Enter car mileage: ");
    scanf("%lf", &car.mileage);
    return car;
}

void ShowCarInfo(Car car) {
    printf("Car Name: %s\n", car.name);
    printf("Year: %d\n", car.year);
    printf("Mileage: %.2f\n", car.mileage);
}

Car addMileage(Car car, double mileage) {
    car.mileage += mileage;
    printf("Mileage after addition: %.2f\n", car.mileage);
    return car;
}

void isOlderThanYear(Car car) {
    2025 - car.year > 2 ? printf("The car is older than 2 years.\n") : printf("The car is not older than 2 years.\n");
}
