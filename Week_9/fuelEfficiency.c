//25101420 공호민
#include <stdio.h>

double FuelEfficiency(double, double);

int main(void) {
    double fuel, distance;

    while(1) {
        printf("Enter fuel consumed (in liters): ");
        scanf("%lf", &fuel);
        
        printf("Enter distance traveled (in kilometers): ");
        scanf("%lf", &distance);

        printf("Fuel efficiency: %g km/l\n", FuelEfficiency(fuel, distance));
        printf("Do you want to continue? (Y/N): "); 
        char choice; 
        scanf(" %c", &choice);
        if (choice == 'Y' || choice == 'y') {
            continue;
        } else {
            printf("Exiting the program.\n");
            return 0;
        }
    }
    printf("Invalid input. Program terminated.\n");

    return 0;
}

double FuelEfficiency(double fuel, double distance) {
    return distance / fuel;
}