//25101420 공호민

#include <stdio.h>



int main(void)
{
    char str[5][10];
    for(int i = 0; i < 5; i++)
    {
        printf("문자열을 입력하세요: ");
        scanf(" %[^\n]", str[i]); 
        // 공백 문자도 포함ㅁ하여 입력 

    }
    for(int i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}