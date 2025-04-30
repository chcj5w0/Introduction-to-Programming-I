#include <stdio.h>
#include <string.h>

#define MAX 100 // 최대 친구 수 

typedef struct { // 구조체로 선언 
    char name[20];
    int count;
} Friend;

void insertFriend(Friend list[], int *n, char newName[], int newCount) { // n은 친구 수이기 때문에 포인터로 넘겨받음 
    int i, j;

    // 삽입 위치 찾기
    for (i = 0; i < *n; i++) {
        if (newCount > list[i].count) {
            break;
        }
    }

    // 한 칸씩 뒤로 밀기
    for (j = *n; j > i; j--) {
        list[j] = list[j - 1];
    }

    // 새 친구 삽입
    strcpy(list[i].name, newName);
    list[i].count = newCount;
    (*n)++;
}

void printFriends(Friend list[], int n) {
    for (int i = 0; i < n; i++) {
        printf("{ %s %d } ", list[i].name, list[i].count);
    }
    printf("\n");
}

int main() {
    Friend friends[MAX] = {
        {"다현", 200}, {"정연", 150}, {"쯔위", 90},
        {"사나", 30}, {"지효", 15}
    };
    int n = 5;

    char newName[20];
    int newCount;

    while(1) {

        printf("== 현재 친구 목록 ==\n");
        printFriends(friends, n);
    
        printf("\n추가할 친구 이름 입력: ");
        scanf("%s", newName);
    
        printf("카톡 횟수 입력: ");
        scanf("%d", &newCount);
    
        insertFriend(friends, &n, newName, newCount);
    
        printf("\n== 새 친구 삽입 후 ==\n");
        printFriends(friends, n);
    
    }

    return 0;
}
