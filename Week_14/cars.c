//25101420 공호민 
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* name;
    int year;
    double mileage;
} Car;

Car* InputCarsInfo(int size);
void ShowCarsInfo(Car *car, int size);
void addMileage(Car *car, double mileage);
void isOlderThanYear(Car *car);

int main(void) {
    Car* cars = InputCarsInfo(5);
    ShowCarsInfo(cars, 5);
    if (cars == NULL) {
        return 1; // Exit if memory allocation failed
    }

    printf("Enter a car number to add mileage: ");
    int carNumber;
    scanf("%d", &carNumber);
    double mileage;
    printf("Enter mileages to add: ");
    scanf("%lf", &mileage);
    addMileage(&(cars[carNumber-1]), mileage);
    ShowCarsInfo(cars, 5);
    isOlderThanYear(&(cars[carNumber-1]));

    return 0;
}

Car* InputCarsInfo(int size) {

    Car *cars = (Car*)malloc(sizeof(Car) * size);
    if (cars == NULL) {
        printf("Memory allocation failed.\n");
        return NULL; // Return NULL if memory allocation fails
    }
    for (int i = 0; i < size; i++) {
        cars[i].name = (char *)malloc(50 * sizeof(char)); // Allocate memory for car name
        if (cars[i].name == NULL) {
            printf("Memory allocation for car name failed.\n");
            free(cars); // Free previously allocated memory
            return NULL; // Return NULL if memory allocation fails
        }
        printf("Car number %d\n", i + 1);
        printf("Enter car name: ");
        scanf("%s", cars[i].name); 
        if(cars[i].name[0] == '\0') 
            break; // Exit if no name is entered
        printf("Enter car year: ");
        scanf("%d", &cars[i].year);
        printf("Enter car mileage: ");
        scanf("%lf", &cars[i].mileage);
    }
    return cars; // Return the pointer to the array of cars
    
}

void ShowCarsInfo(Car cars[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\nCar number %d\n", i + 1);
        printf("Car Name: %s\n", cars[i].name);
        printf("Year: %d\n", cars[i].year);
        printf("Mileage: %.2f\n", cars[i].mileage);
    }
}

void addMileage(Car *car, double mileage) {
    car->mileage += mileage;
    printf("Mileage after addition: %.2f\n", car->mileage);
}

void isOlderThanYear(Car *car) {
    2025 - car->year > 2 ? printf("The car is older than 2 years.\n") : printf("The car is not older than 2 years.\n");
}
