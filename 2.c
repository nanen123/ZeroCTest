#include<stdio.h>

int main()
{
	int arr[5][5] = { 0, };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = i * 4 + j + 1;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][4] += arr[i][j];
			arr[4][i] += arr[j][i];
			arr[4][4] += arr[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}