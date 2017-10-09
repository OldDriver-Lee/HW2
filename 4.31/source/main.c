#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c, d, e;
	for (a = 1; a <= 17 ; a += 2){
		if (1 <= a && a <= 9){
			for (b = 1; b <= (9 - a) / 2; b++){
			printf(" ");
			}
			for (c = 1; c <= a; c++){
			printf("*");
			}
		}
		else{
			for (d = 1;  d <= (a - 9) / 2; d++){
			printf(" ");
			}
			for (e = 1; e <= 18 - a; e++){
			printf("*");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}