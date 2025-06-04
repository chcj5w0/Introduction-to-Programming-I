//25101420 공호민
#include <stdio.h>
#include <math.h>

typedef struct point {
    int x;
    int y;
} pointT;


typedef struct line {
    pointT start;
    pointT end;
} lineT;

void InputLine(lineT *line);
double GetLineLength(lineT line);

int main(void) {
    lineT line;
    InputLine(&line);
    double length = GetLineLength(line);
    printf("The length of the line is: %.2f\n", length);
    return 0;   
}

void InputLine(lineT *line) {
    printf("Enter start point (x y): ");
    scanf("%d %d", &line->start.x, &line->start.y);
    printf("Enter end point (x y): ");
    scanf("%d %d", &line->end.x, &line->end.y);
}

double GetLineLength(lineT line) {
    return sqrt(pow(line.end.x - line.start.x, 2) + pow(line.end.y - line.start.y, 2));
}

