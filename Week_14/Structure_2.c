#include <stdio.h>

typedef struct student {
    int number;
    char name[10];
    double height;
} student_T;

void print_student(student_T *s) {
    printf("Number: %d\n", s->number);
    printf("Name: %s\n", s->name);
    printf("Height: %.2f\n", s->height);
}

student_T* InputStudent() {

    student_T *s = (student_T *)malloc(sizeof(student_T));
    printf("Enter student number: ");
    scanf("%d", &s->number);
    printf("Enter student name: ");
    scanf("%s", (*s).name);
    // Using s->name instead of (*s).name for better readability
    printf("Enter student height: ");
    scanf("%lf", &s->height); // This is terrible
    // just use s->height instead of &()
}

int main() {
    student_T s1 = {1, "Alice", 5.5};
    student_T s2 = {2, "Bob", 6.0};

    printf("Student 1:\n");
    print_student(&s1);
    
    printf("\nStudent 2:\n");
    print_student(&s2);

    return 0;
}