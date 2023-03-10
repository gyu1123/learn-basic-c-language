#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 7 

int main(void) {
    int lotto[MAX_SIZE];   // �ζǹ�ȣ�� ������ �迭
    int num, rank;

    int user[MAX_SIZE]; // �����ڵ��� ��ȣ�� ������ �迭
    
    

    
  
    printf("�ζ� ��ȣ �Է� : \n");
    for (int i = 0; i < 6; i++) { // n���� �ζ� ��ȣ�� �Է� �ޱ�
        scanf_s("%d", &user[i]);
        if (user[i] == user[MAX_SIZE])
        {

        }
    }

    // �Է� ���� �ζ� ��ȣ�� ������������ ����
    for (int i = 0; i < 7 - 1; i++) {
        for (int j = 0; j < 7 - 1 - i; j++) {
            if (user[j] < user[j + 1]) {
                int temp = user[j];
                user[j] = user[j + 1];
                user[j + 1] = temp;
            }
        }
    }
    printf("���� �Է��� �ζ� ��ȣ : \n", user[MAX_SIZE]);

    srand((unsigned int)time(NULL));   // ���� �õ� ����



    
    
    for (int i = 0; i < MAX_SIZE; i++) {
        num = rand() % 45 + 1;  // 1���� 45���� ���� ���� ����
        lotto[i] = num;
        // �ߺ��� ���ڰ� ���� ��� �ٽ� �̵��� ��
        for (int j = 0; j < i; j++) {
            if (lotto[i] == lotto[j]) {
                i--;
                break;
            }
        }
    }
    // ������ �ζ� ��ȣ�� ������������ ����
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        for (int j = 0; j < MAX_SIZE - 1 - i; j++) {
            if (lotto[j] < lotto[j + 1]) {
                int temp = lotto[j];
                lotto[j] = lotto[j + 1];
                lotto[j + 1] = temp;
            }
        }
    }
    printf("�̹� ���� �ζ� ��ȣ.\n");

    // �ζǹ�ȣ ���
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%d ", lotto[i]);
    }
    printf("\n");

    return 0;
}