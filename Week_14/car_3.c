//25101420 공호민 
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* name;
    int year;
    double mileage;
} Car;

Car* InputCarInfo(void);
void ShowCarInfo(Car *car);
void addMileage(Car *car, double mileage);
void isOlderThanYear(Car *car);

int main(void) {
    Car *car = InputCarInfo();
    if (car == NULL) {
        return 1; // Exit if memory allocation failed
    }
    ShowCarInfo(car);
    
    double additionalMileage;
    printf("Enter additional mileage to add: ");
    scanf("%lf", &additionalMileage);
    addMileage(car, additionalMileage);
    
    ShowCarInfo(car);
    
    isOlderThanYear(car);
    
    return 0;
}

Car* InputCarInfo(void) {
    Car *car = (Car *)malloc(sizeof(*car));
    if (car == NULL) {
        printf("Memory allocation failed.\n");
        return NULL; // Return NULL if memory allocation fails
    }
    car->name = (char *)malloc(50 * sizeof(char)); // Allocate memory for car name
    if (car->name == NULL) {
        printf("Memory allocation for car name failed.\n");
        free(car); // Free previously allocated memory
        return NULL; // Return NULL if memory allocation fails
    }
    printf("Enter car name: ");
    scanf("%s", car->name); 
    printf("Enter car year: ");
    scanf("%d", &car->year);
    printf("Enter car mileage: ");
    scanf("%lf", &car->mileage);
    return car; // Return the pointer to the allocated Car structure
}

void ShowCarInfo(Car *car) {
    printf("Car Name: %s\n", car->name);
    printf("Year: %d\n", car->year);
    printf("Mileage: %.2f\n", car->mileage);
}

void addMileage(Car *car, double mileage) {
    car->mileage += mileage;
    printf("Mileage after addition: %.2f\n", car->mileage);
}

void isOlderThanYear(Car *car) {
    2025 - car->year > 2 ? printf("The car is older than 2 years.\n") : printf("The car is not older than 2 years.\n");
}
