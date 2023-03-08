#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a = rand() % 100 + 1;
    for (int i = 1; i <= 10; i++)
    {

        int number = 0;
        printf(" \n 업다운 게임 시작 숫자 입력 :");
        scanf_s("%d", &number);

        printf(" \n 랜덤값 : %d \n ", a);
        printf(" \n 입력값 : %d \n ", number);

        if (number == a)
        {
            break;
        }
        else if (number < a)
        {
            printf("업");
        }
        else if (number > a)
        {
            printf("다운");
        }
        else
            continue;
    }
    printf("맞췄습니다\n");

    return 0;
}