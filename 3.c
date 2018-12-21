#include<stdio.h>

int main()
{
	int score[5][4] = { 0, };

	int max = 0;
	int max_num = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}


	for (int i = 0; i < 5; i++)
	{
		int temp = 0;

		for (int j = 0; j < 4; j++)
		{
			temp += score[i][j];
		}

		if (max < temp)
		{
			max = temp;
			max_num = i + 1;
		}
	}

	printf("%d %d", max_num, max);

}