#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c;
	for (a = 1 ; a < 501 ; a++){
		for (b = 1; b < 501; b++){
			for (c = 1; c < 501; c++){
				if ((a ^ 2) == ((b ^ 2) + (c ^ 2))){
					printf("±×Ãä              side1               side2\n");
					printf("%d                %d                  %d\n", a, b, c);
				}
			}
		}
	}
	system("pause");
	return 0;
}