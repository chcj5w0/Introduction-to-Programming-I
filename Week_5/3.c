//25101420 공호민
#include <stdio.h>

double fuel_efficiency(int, int, int);

int main(void){
    int dep, arr, fuel;
    printf("출발지점 주행거리계 수치: ");
    scanf("%d", &dep);
    printf("도착지점 주행거리계 수치: ");
    scanf("%d", &arr);;
    printf("사용 연료량: ");
    scanf("%d", &fuel);

    double eff = fuel_efficiency(dep, arr, fuel);

    printf("연료 1리터당 주행 거리는 %g\n", eff);

    return 0;
}

double fuel_efficiency(int dep, int arr, int fuel){
    return (double)(arr - dep) / fuel;
}