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


	strcpy(bing[0].key, "����"); bing[0].val = 1;
	strcpy(bing[1].key, "����"); bing[1].val = 2;
	strcpy(bing[2].key, "��"); bing[2].val = 3;




	for (int i = 0; i <= 100; i++)
	{
		int a = rand() % 3 + 1;

		int user = 0;

		for (int z = 0; z <= 3; z++) {
			if (bing[z].val == a) {
				strcpy(com, bing[z].key);
			}
		}


		printf("\n ------���� ���� �� ���� :  1. ���� 2.���� 3.�� ------\n");
		scanf_s("%d", &user);
		printf("���� ���� : %d\n", user);

		printf("-----------------------------------------------\n");
		for (int j = 0; j <= 3; j++)
		{
			if (bing[j].val == user) {
				strcpy(Us, bing[j].key);
			}
		}

		if (user == a)
		{
			printf("���� : %s   %s : ���\n", Us, com);
			printf("���º�\n");
		}
		else if (user == 1 && a == 2 || user == 2 && a == 3 || user == 3 && a == 1)
		{
			printf("���� : %s   %s : ���\n", Us, com);
			printf("�����ϴ�\n");
			Acount++; // ��ǻ�� ����Ʈ ����
		}
		else if (3 < user || user <= 0)
		{
			printf("�߸� �Է��Ͽ����ϴ�");
		}
		else
		{
			printf("���� : %s   %s : ���\n", Us, com);
			printf("�̰���ϴ�\n");
			Ucount++; // ���� ����Ʈ ����
		}
		if (Ucount >= 5)
		{
			printf(" �� ���� ��� \n");
			printf("%d : %d \n", Ucount, Acount);
			printf("���� ��! \n");
			break;
		}
		else if (Acount >= 5)
		{
			printf(" �� ���� ��� \n");
			printf("%d : %d \n", Ucount, Acount);
			printf("��ǻ�� ��! \n");
			break;
		}


		printf("���� ���ھ�\n");
		printf("%d : %d\n", Ucount, Acount);
	}

	return 0;
}