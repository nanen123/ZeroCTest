#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int arr[30];
	int chk = 0;
	int cnt = 0;
	int class_num;

	srand((unsigned int)time(NULL));

	printf("�б��� �ο� �Է� : ");
	scanf("%d", &class_num);

	for (int i = 0; i<class_num; i++) {

	}
	printf("---��� ���---");
	printf("\n�ڸ� ��ġ ��ǥ!\n");
	for (int i = 0; i < class_num; i++) {
		printf("%-2d�ڸ� :  %-2d�� ", i + 1, arr[i]);
		cnt++;
		if (cnt == 5) {
			printf("\n");
			cnt = 0;
		}
		else
			printf("\t");
	}

}