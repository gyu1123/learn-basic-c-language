# learn-basic-c-language
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
가위 바위 보 게임

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct DICT {
	char *key[5];
	int val;

};


int main()
{
	int Ucount = 0;
	int Acount = 0;
	char com[5];
	char Us[5];

	struct DICT bing[3];


	strcpy(bing[0].key, "가위"); bing[0].val = 1;
	strcpy(bing[1].key, "바위"); bing[1].val = 2;
	strcpy(bing[2].key, "보"); bing[2].val = 3;




	for (int i = 0; i <= 100; i++)
	{
		int a = rand() % 3 + 1;

		int user = 0;

		for (int z = 0; z <= 3; z++) {
			if (bing[z].val == a) {
				strcpy(com, bing[z].key);
			}
		}


		printf("\n ------가위 바위 보 선택 :  1. 가위 2.바위 3.보 ------\n");
		scanf_s("%d", &user);
		printf("유저 선택 : %d\n", user);

		printf("-----------------------------------------------\n");
		for (int j = 0; j <= 3; j++)
		{
			if (bing[j].val == user) {
				strcpy(Us, bing[j].key);
			}
		}

		if (user == a)
		{
			printf("유저 : %s   %s : 상대\n", Us, com);
			printf("무승부\n");
		}
		else if (user == 1 && a == 2 || user == 2 && a == 3 || user == 3 && a == 1)
		{
			printf("유저 : %s   %s : 상대\n", Us, com);
			printf("졌습니다\n");
			Acount++; // 컴퓨터 포인트 증가
		}
		else if (3 < user || user <= 0)
		{
			printf("잘못 입력하였습니다");
		}
		else
		{
			printf("유저 : %s   %s : 상대\n", Us, com);
			printf("이겼습니다\n");
			Ucount++; // 유저 포인트 증가
		}
		if (Ucount >= 5)
		{
			printf(" 총 게임 결과 \n");
			printf("%d : %d \n", Ucount, Acount);
			printf("유저 승! \n");
			break;
		}
		else if (Acount >= 5)
		{
			printf(" 총 게임 결과 \n");
			printf("%d : %d \n", Ucount, Acount);
			printf("컴퓨터 승! \n");
			break;
		}


		printf("현재 스코어\n");
		printf("%d : %d\n", Ucount, Acount);
	}

	return 0;
}
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
업다운 게임

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

ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ



별찍기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void first() 
{
	int arr[5][5] = { 0, };

	for (int i = 0; i < 5; i++) // 열(세로만큼 반복)
	{
		for (int j = 0; j < 5; j++) //행(가로만큼 반복)
		{
			if (i == 0 && j < 1 || i == 1 && j < 2 || i == 2 && j < 3 || i == 3 && j < 4 || i == 4 && j < 5) {
				arr[i][j] = '*'; // 배열 값에 * 넣기
			}
			else {
				arr[i][j] = ' ';
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			printf("%c", arr[i][j]); // 넣은 별을 출력
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}

void second()
{
	int arr2[5][5] = { 0, };
	int arr3[5][5] = { 0, };
	int arr4[5][5] = { 0, };
	

	for (int i = 0; i < 5; i++) // 열(세로만큼 반복)
	{
		for (int j = 0; j < 5; j++) //행(가로만큼 반복)
		{
			if (i == 0 && j >= 0 || i == 1 && j >= 1 || i == 2 && j >= 2 || i == 3 && j >= 3 || i == 4 && j >= 4) {
				arr2[i][j] = '*'; // 배열 값에 * 넣기
			}
			else {
				arr2[i][j] = ' ';
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			printf("%c", arr2[i][j]); // 넣은 별을 출력
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}

void third()
{
	int arr3[5][5] = { 0, };
	for (int i = 0; i < 5; i++) // 열(세로만큼 반복)
	{
		for (int j = 0; j < 5; j++) //행(가로만큼 반복)
		{
			if (i == 0 && j <= 4 || i == 1 && j <= 3 || i == 2 && j <= 2 || i == 3 && j <= 1 || i == 4 && j <= 0) {
				arr3[i][j] = '*'; // 배열 값에 * 넣기
			}
			else {
				arr3[i][j] = ' '; // 배열 공백
			}
		}
	}

	
	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			printf("%c", arr3[i][j]); // 넣은 별을 출력
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}

void forth()

{
	int arr4[5][5] = { 0, };

	for (int i = 0; i < 5; i++) // 열(세로만큼 반복)
	{
		for (int j = 0; j < 5; j++) //행(가로만큼 반복)
		{
			if (i == 0 && j >= 4 || i == 1 && j >= 3 || i == 2 && j >= 2 || i == 3 && j >= 1 || i == 4 && j >= 0) {
				arr4[i][j] = '*'; // 배열 값에 * 넣기
			}
			else {
				arr4[i][j] = ' '; // 배열 공백
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			printf("%c", arr4[i][j]); // 넣은 별을 출력
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}

void fifth(){
	int arr5[5][5] = { 0, };
	for (int i = 0; i < 5; i++) // 열(세로만큼 반복)
	{
		for (int j = 0; j < 5; j++) //행(가로만큼 반복)
		{
			if (i == 0 && j == 2 || i == 1 && 0 < j && j < 4  || i == 2 && 0 < j < 4  || i == 3 && 0 < j && j < 4 || i == 4 && j == 2) { 
				arr5[i][j] = '*'; // 배열 값에 * 넣기
			}
			else {
				arr5[i][j] = ' '; // 배열 공백
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%c", arr5[i][j]); // 넣은 별을 출력
		}
		printf("\n");
	}
	printf("\n");
}







int main()
{

	first();

	second();

	third();

	forth();

	fifth();

	return 0;
}
