#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c,d,e;
	float f;
	while (a = -1){
		printf("��J���u¾��   1--->�g�z   2--->���~�u   3--->��Ī��u   4--->�s�u (-1 to end):");
		scanf("%d", &a);
		switch (a){
		case 1:
			printf("Your salary in this week is $1000\n");
			printf("\n");
			break;
		case 2:
			printf("�п�J���P�u��:");
			scanf("%d", &b);
			if (b > 40){
				c = 400 + (b - 40) * 15;
			}
			else{
				c = b * 10;
			}
			printf("Your salary in this week is $%d\n", c);
			printf("\n");
			break;
		case 3:
			printf("�п�J���g�P����B:");
			scanf("%d", &d);
			f = 250 + (d * 0.057);
			printf("Your salary in this week is $%f\n", f);
			printf("\n");
			break;
		case 4:
			printf("�п�J���g�Ͳ����:");
			scanf("%d", &e);
			c = 5 * e;
			printf("Your salary in this week is $%d\n", c);
			printf("\n");
			break;
		case -1:
			printf("Bye Bye!\n");
			system("pause");
			return 0;
			break;
		}
	}
	system("pause");
}