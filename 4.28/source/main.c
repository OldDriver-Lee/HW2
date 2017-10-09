#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c,d,e;
	float f;
	while (a = -1){
		printf("輸入員工職種   1--->經理   2--->時薪工   3--->抽傭金工   4--->零工 (-1 to end):");
		scanf("%d", &a);
		switch (a){
		case 1:
			printf("Your salary in this week is $1000\n");
			printf("\n");
			break;
		case 2:
			printf("請輸入本周工時:");
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
			printf("請輸入本週銷售金額:");
			scanf("%d", &d);
			f = 250 + (d * 0.057);
			printf("Your salary in this week is $%f\n", f);
			printf("\n");
			break;
		case 4:
			printf("請輸入本週生產件數:");
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