#include <stdio.h>

// Structure structure-name variable-name;
// Structure structure-name { field-declarations };
// typedef struct structure-name new-type-name;
// Structure can contain other structures, arrays, and pointers.
// Structure can be initialized at the time of declaration.
// Structure can be nested, meaning a structure can contain another structure as a member.
// Structure can be used to group related data together.
// Structure can be passed to functions by value or by reference.
// Structure can be used to create complex data types.


typedef struct point {
    int x;
    int y;
} point_T; 


struct student {
    int number;
    char name[10];
    double height;
    point_T location; // Nested structure
};

typedef struct student student_T; // Typedef for easier usage

point_T CreatePoint(int x, int y);

point_T CreatePoint(int x, int y) {
    point_T p;
    p.x = x;
    p.y = y;
    return p;
}


int main(void) {

    struct student s1 = { 1001, "Alice", 1.65, {10, 20} }; // Initializing structure
    struct student s2; // Declaration of structure variable
    s2.number = 1002; // Assigning values to structure members
    s2.height = 1.75;
    s2.location.x = 30; // Assigning values to nested structure members
    s2.location.y = 40;
    snprintf(s2.name, sizeof(s2.name), "Bob"); // Using snprintf to safely copy string
    student_T s3;
    s3.number = 1003;
    s3.height = 1.80;
    s3.location = (point_T){50, 60}; // Using compound literal for nested structure
    s3.location = (point_T){60, 100}; // Another way to initialize nested structure, // but this is not valid in C, only in C++.
    

    point_T p1, p2;
    p1 = CreatePoint(5, 10); // Using function to create point
    p2 = CreatePoint(15, 20); // Using function to create another point
    p2 = p1; // Assigning one point to another

    point_T list[4] = {
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 1}
    }; // Array of structures

    for(int i = 0; i < 4; i++) {
        printf("list[%d].x = %d, list[%d].y = %d\n", i, list[i].x, i, list[i].y);
    }
    printf(" p2.x = %d, p2.y = %d\n", p2.x, p2.y);

    return 0;
}