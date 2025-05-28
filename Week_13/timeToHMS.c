//25101420 공호민
#include <stdio.h>

void ConvertTimeToHMS(int time, int* hour, int* min, int* sec);

int main() {
    int time, hour, min, sec;

    printf("Enter time in seconds: ");
    scanf("%d", &time);

    ConvertTimeToHMS(time, &hour, &min, &sec);

    printf("Converted time: %02d:%02d:%02d\n", hour, min, sec);

    return 0;
}

void ConvertTimeToHMS(int time, int* hour, int* min, int* sec) {
    *hour = time / 3600;          // Calculate hours
    time %= 3600;                 // Remaining seconds after extracting hours
    *min = time / 60;             // Calculate minutes
    *sec = time % 60;             // Remaining seconds after extracting minutes
}