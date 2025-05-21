//25101420 공호민

#include <stdio.h>

void StringCopy(char dst[], char scr[]);

void StringCopy(char dst[], char scr[])
{
    int i = 0;
    while (scr[i] != '\0')
    {
        dst[i] = scr[i];
        i++;
    }
    dst[i] = '\0'; // null terminator
}

int main()
{
    char str1[100], str2[100];
    printf("문자열을 입력하세요: ");
    scanf("%s", str1);
    StringCopy(str2, str1);
    printf("복사된 문자열: %s\n", str2);
    return 0;
}