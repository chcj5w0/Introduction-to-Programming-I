//Introduction to Programming Week 4

#include <stdio.h>


int main(void) {
    
    int age;

    printf("What is your age? ");

    scanf("%d", &age);

    char grade;

    printf("What is your desired grade? ");

    scanf(" %c", &grade);

    printf("You are %d years old.\n", age);

    printf("Your desired grade is %c.\n", grade);
}



