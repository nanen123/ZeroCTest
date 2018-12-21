#include<stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	int *Pibo = (int *)malloc(sizeof(int) * num);
	Pibo[0] = 0; Pibo[1] = 1;

	for (int i = 2; i <= num; i++)
	{
		Pibo[i] = Pibo[i - 1] + Pibo[i - 2];
	}

	printf("%d", Pibo[num]);

	free(Pibo);
}