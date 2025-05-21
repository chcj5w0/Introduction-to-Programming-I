//25101420 공호민

#include <stdio.h>

void toUpperString(char str[]);

void ToUpperString(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
}

int main()
{
    char str[100];
    printf("문자열을 입력하세요: ");
    scanf("%s", str);
    ToUpperString(str);
    printf("대문자로 변환된 문자열: %s\n", str);
    return 0;
}