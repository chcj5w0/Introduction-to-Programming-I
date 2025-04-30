#include <stdio.h>




int main(void) {

    int students[10][5];
    int kor, eng, math, sum, avg;

    for(int i = 0; i < 3; i++){
        printf("학생 %d의 국어, 영어, 수학 성적을 입력하세요: ", i + 1);
        scanf("%d %d %d", &kor, &eng, &math);

        sum = kor + eng + math;
        avg = sum / 3;

        students[i][0] = kor;
        students[i][1] = eng;
        students[i][2] = math;
        students[i][3] = sum;
        students[i][4] = avg;

    }

    printf("학번 국어 영어 수학 총점 평균\n");

    for(int i = 0; i < 3; i++)
        printf("%3d %3d %3d %3d %3d\n", i + 1, students[i][0], students[i][1], students[i][2], students[i][3], students[i][4]);

    return 0;
}