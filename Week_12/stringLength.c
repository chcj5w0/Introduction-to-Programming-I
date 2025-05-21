//25101420 공호민

#include <stdio.h>

int StringLentgth(char s[]);

int StringLength(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str[100];
    printf("문자열을 입력하세요: ");
    scanf("%s", str);
    printf("문자열의 길이는 %d입니다.\n", StringLength(str));
    return 0;
}
