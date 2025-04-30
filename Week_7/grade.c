//25101420 공호민
#include <stdio.h>

int InputScore(void);
char GetGrade(int, int, int);

int main(void) {
    int s1, s2, s3;
    printf("세 과목의 점수를 입력하세요: ");

    s1 = InputScore();
    s2 = InputScore();
    s3 = InputScore();

    if(s1 == -1 || s2 == -1 || s3 == -1)
        printf("0부터 100까지의 정수를 입력하세요.\n");
    else
        printf("학점은 %c입니다. \n", GetGrade(s1, s2, s3));

    return 0;
}


int InputScore(void){
    int score;
    scanf("%d", &score);
    return score >= 0 && score <= 100 ? score : -1;
}

char GetGrade(int s1, int s2, int s3){
    double avg = (s1 + s2 + s3) / 3.0;
    switch((int)avg / 10){
        case 10:
        case 9: return 'A';
        case 8: return 'B';
        case 7: return 'C';
        case 6: return 'D';
        default: return 'F';
    }
}