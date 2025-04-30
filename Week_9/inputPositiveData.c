//25101420 공호민
#include <stdio.h>

int InputPositiveData(void);

int main(void) {
    //성년인지 미성년인지 구분

    //성년: 19세 이상

    if(InputPositiveData() >= 19) {
        printf("성년입니다.\n");
    } else {
        printf("미성년입니다.\n");
    }
    return 0;
}

int InputPositiveData(void) {
    int data;
    while (1) {
        printf("Enter the age: ");
        scanf("%d", &data);
        if (data > 0) {
            return data;
        } else {
            printf("Invalid input. Please enter a positive integer.\n");
        }
    }
}