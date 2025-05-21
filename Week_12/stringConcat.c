//25101420 공호민

#include <stdio.h>

void StringConcat(char s1[], char s2[]);

void StringConcat(char s1[], char s2[])
{
    int i = 0, j = 0;
    while (s1[i] != '\0')
    {
        i++;
    }
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0'; // null terminator
}

int main()
{
    char str1[100], str2[100];
    printf("첫 번째 문자열을 입력하세요: ");
    scanf("%s", str1);
    printf("두 번째 문자열을 입력하세요: ");
    scanf("%s", str2);
    StringConcat(str1, str2);
    printf("결과 문자열: %s\n", str1);
    return 0;
}