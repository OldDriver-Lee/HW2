#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x, y, i, j;
	printf("�п�J�e:");
	scanf("%d", &x);
	printf("�п�J��");
	scanf("%d", &y);
	for (i = 1; i <= x; i++){
		for (j = 1; j <= y; j++){
			if (1 < i && i <= (x -1) && 1 < j && j <= (y-1)){
			printf(" ");	
			}
			else{
			printf("+");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}