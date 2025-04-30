//25101420 공호민
#include <stdio.h>

// 전역 변수 exchange_rate
// 전역 변수를 사용하지 않는다면? 
// main함수에서 환율이 필요한 함수에 인수로 넘겨주어야 한다
// 다른 함수에서 환율 수정이 필요할 때에는 반환값을 통해 수정하여야 한다


// 지역 변수를 전역 변수로 바꾼다면?
// 값을 반환하지 않아도 직접 접근할 수 있음
// 다른 곳에서 의도치 않게 값을 수정할 수 있음


double exchange_rate;

void SetRate(double);

double GetRate(void);

double ToDollar(int);

int ToWon(double);


int main(void) {
    double rate;

    printf("$1에 대한 오늘의 환율은? ");

    scanf("%lf", &rate);

    SetRate(rate);

    printf("오늘의 환율은 $1에 ₩%.2f입니다.\n", GetRate());

    printf("$2 = ₩%d\n", ToWon(2));

    printf("₩2600 = $%.2f\n", ToDollar(2600));

    return 0;
}

void SetRate(double won) {
    exchange_rate = won;
}

double GetRate(void) {
    return exchange_rate;
}

double ToDollar(int won) {
    double dollar = won / exchange_rate;
    return dollar;
}

int ToWon(double dollar) {
    int won = (int)(dollar * exchange_rate);
    return won;
}
