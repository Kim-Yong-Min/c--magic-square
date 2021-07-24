#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 99
#pragma warning(disable:4996)
void main() {
	int datazon[SIZE][SIZE]{ 0 };
	int i, j, k, fNum;
	printf("홀수 마방진 입니다 2자리 이하 홀수 입력 >> ");
	scanf("%d", &fNum);
	if (fNum % 2 != 0) {
		j = fNum / 2;

		i = 0;
		k = 1;
		while (1) {
			datazon[i][j] = k;
			
			k++;
			if (k > fNum * fNum)
				break;
			else {
				i--;
				j++;
				if ((datazon[i][j] != 0) || (i < 0) && (j > (fNum - 1))) {
					i++;
					i++;
					j--;
					}

				if (i < 0)
					i = fNum - 1;
				if (i > fNum -1)
					i = 0;
				if (j > fNum - 1)
					j = 0;
				if (j < 0)
					j = fNum - 1;
				
			}
		}
			printf("\n");
			printf("\n");

		for (i = 0; i < fNum; i++) {
			for (j = 0; j < fNum; j++) {
				printf("%4d", datazon[i][j]);
			}
				printf("\n");
				printf("\n");
			}
		
	}
}
