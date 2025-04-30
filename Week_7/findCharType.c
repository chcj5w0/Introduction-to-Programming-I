//25101420 공호민
#include <stdio.h>

int FindCharType(char);


int main(void){

    char input;

    printf("하나의 문자를 입력하세요: ");

    scanf("%c", &input);

    switch (FindCharType(input))
    {
    case 0: printf("일반 문자입니다.\n"); break;
    case 1: printf("스페이스 문자입니다.\n"); break;
    case 2: printf("탭 문자입니다.\n"); break;
    case 3: printf("개행 문자입니다.\n"); break;
    case 4: printf("알파벳 및 숫자 문자입니다.\n"); break;
    default:
        break;
    }

    return 0;
}


int FindCharType(char input){
    if(input == ' ') return 1;
    else if(input == '\t') return 2;
    else if(input == '\n') return 3;
    else if((input >= '0' && input < '9') || (input >= 'A' && input <= 'z')) return 4;
    else return 0;
}