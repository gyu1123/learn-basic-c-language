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