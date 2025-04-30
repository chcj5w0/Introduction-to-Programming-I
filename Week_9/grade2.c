//25101420 공호민
#include <stdio.h>


int InputScore(void);
char GetGrade(int, int, int);

int main(void) {
    int s1, s2, s3;
    
    for(int i = 0; i < 5; i++){
        printf("세 과목의 점수를 입력하세요: ");
        // 점수 입력    
        // 0~100 사이의 점수가 아닐 경우 -1을 리턴
        // 점수가 유효할 경우 점수를 리턴
        // 점수가 유효할 경우에만 학점을 계산
        while(1){
            s1 = InputScore();
            s2 = InputScore();
            s3 = InputScore();
            if(s1 != -1 && s2 != -1 && s3 != -1) break;
            printf("잘못된 점수입니다. 다시 입력하세요: ");
        }
        printf("학점은 %c입니다. \n", GetGrade(s1, s2, s3));
    }

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