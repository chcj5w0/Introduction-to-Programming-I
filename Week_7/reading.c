//25101420 공호민
#include <stdio.h>


void readNum(int);
void printDigit(int);

int main(void){

    int number;
    printf("세 자리 정수를 입력하세요: ");
    scanf("%d", &number);
    readNum(number);

    return 0;
}

void readNum(int num){

    int ones = num % 10;
    num /= 10;
    int tens = num % 10;
    num /= 10;
    int hundreds = num;
    printDigit(hundreds);
    printDigit(tens);
    printDigit(ones);
}

void printDigit(int digit){
    switch (digit)
    {
    case 0: printf("zero ");    break;
    case 1: printf("one ");     break;
    case 2: printf("two ");     break;
    case 3: printf("three ");   break;
    case 4: printf("four ");    break;
    case 5: printf("five ");    break;
    case 6: printf("six ");     break;
    case 7: printf("seven ");   break;
    case 8: printf("eight ");   break;
    case 9: printf("nine ");    break;
        
    default:
        break;
    }
}