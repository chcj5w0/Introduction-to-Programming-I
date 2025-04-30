#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[100];
    char *p;

    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);

    // 포인터로 문자열 순회하며 변환
    p = str;
    while (*p != '\0') {
        if (isupper(*p)) {
            *p = tolower(*p);
        } else if (islower(*p))
        {
            *p = toupper(*p);
        }
        
        p++;
    }

    printf("변환된 문자열: %s\n", str);

    return 0;
}
