#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c,d,e,f,g,h,i,j;
	printf("(A)\n");
	for (a = 1; a < 11; a++){
		for (b = 0; b <= a - 1; b++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("(B)\n");
	for (c = 0; c < 10; c++){
		for (d = 0 ; d < 10-c; d++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("(C)\n");
	for (e = 0; e < 10; e++){
		for (f = 0; f < e; f++){
			printf(" ");
		}
		for (g = 0; g < 10 - e; g++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("(D)\n");
	for (h = 0; h < 10; h++){
		for (j = 0; j <10 - h; j++){
			printf(" ");
		}
		for (i = 0; i < h+1; i++){
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}