#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 7 

int main(void) {
    int lotto[MAX_SIZE];   // 로또번호를 저장할 배열
    int num, rank;

    int user[MAX_SIZE]; // 참가자들의 번호를 저장할 배열
    
    

    
  
    printf("로또 번호 입력 : \n");
    for (int i = 0; i < 6; i++) { // n개의 로또 번호를 입력 받기
        scanf_s("%d", &user[i]);
        if (user[i] == user[MAX_SIZE])
        {

        }
    }

    // 입력 받은 로또 번호를 내림차순으로 정렬
    for (int i = 0; i < 7 - 1; i++) {
        for (int j = 0; j < 7 - 1 - i; j++) {
            if (user[j] < user[j + 1]) {
                int temp = user[j];
                user[j] = user[j + 1];
                user[j + 1] = temp;
            }
        }
    }
    printf("내가 입력한 로또 번호 : \n", user[MAX_SIZE]);

    srand((unsigned int)time(NULL));   // 랜덤 시드 설정



    
    
    for (int i = 0; i < MAX_SIZE; i++) {
        num = rand() % 45 + 1;  // 1부터 45까지 랜덤 숫자 생성
        lotto[i] = num;
        // 중복된 숫자가 나올 경우 다시 뽑도록 함
        for (int j = 0; j < i; j++) {
            if (lotto[i] == lotto[j]) {
                i--;
                break;
            }
        }
    }
    // 생성된 로또 번호를 내림차순으로 정렬
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        for (int j = 0; j < MAX_SIZE - 1 - i; j++) {
            if (lotto[j] < lotto[j + 1]) {
                int temp = lotto[j];
                lotto[j] = lotto[j + 1];
                lotto[j + 1] = temp;
            }
        }
    }
    printf("이번 주의 로또 번호.\n");

    // 로또번호 출력
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%d ", lotto[i]);
    }
    printf("\n");

    return 0;
}