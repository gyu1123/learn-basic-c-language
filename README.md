# learn-basic-c-language

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
