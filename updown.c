#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a = rand() % 100 + 1;
    for (int i = 1; i <= 10; i++)
    {

        int number = 0;
        printf(" \n ���ٿ� ���� ���� ���� �Է� :");
        scanf_s("%d", &number);

        printf(" \n ������ : %d \n ", a);
        printf(" \n �Է°� : %d \n ", number);

        if (number == a)
        {
            break;
        }
        else if (number < a)
        {
            printf("��");
        }
        else if (number > a)
        {
            printf("�ٿ�");
        }
        else
            continue;
    }
    printf("������ϴ�\n");

    return 0;
}