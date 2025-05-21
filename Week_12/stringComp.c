//25101420 공호민

#include <stdio.h>

int StringComp(char s1[], char s2[]);

int StringComp(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return 0; // 문자열이 다름
        }
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
    {
        return 1; // 문자열이 같음
    }
    return 0; // 길이가 다름
}

int main()
{
    char str1[100], str2[100];
    printf("첫 번째 문자열을 입력하세요: ");
    scanf("%s", str1);
    printf("두 번째 문자열을 입력하세요: ");
    scanf("%s", str2);
    
    if (StringComp(str1, str2))
    {
        printf("두 문자열은 같습니다.\n");
    }
    else
    {
        printf("두 문자열은 다릅니다.\n");
    }
    
    return 0;
}