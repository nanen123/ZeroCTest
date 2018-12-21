#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int arr[30];
	int chk = 0;
	int cnt = 0;
	int class_num;

	srand((unsigned int)time(NULL));

	printf("학급의 인원 입력 : ");
	scanf("%d", &class_num);

	for (int i = 0; i<class_num; i++) {

	}
	printf("---결과 출력---");
	printf("\n자리 배치 발표!\n");
	for (int i = 0; i < class_num; i++) {
		printf("%-2d자리 :  %-2d번 ", i + 1, arr[i]);
		cnt++;
		if (cnt == 5) {
			printf("\n");
			cnt = 0;
		}
		else
			printf("\t");
	}

}