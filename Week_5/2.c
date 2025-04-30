//25101420 공호민
#include <stdio.h>

double fahreinheit_to_celcius(int);

int main(void){

    int fah;

    printf("화씨온도? ");

    scanf("%d", &fah);

    double cel = fahreinheit_to_celcius(fah);

    printf("화씨 %d도 = 섭씨 %.1f도\n", fah, cel);

    return 0;
}


double fahreinheit_to_celcius(int fahreinheit){

    double celcius;

    celcius = 5 / 9.0 * (fahreinheit - 32);

    return celcius;
}

