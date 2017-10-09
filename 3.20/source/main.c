#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int hours, salary;
	while (hours = -1){
		printf("Enter # hours worked (-1 to end):");
		scanf("%d", &hours);
		if (hours == -1){
			printf("Bye Bye!\n");
			system("pause");
			return 0;
		}
		if (hours > 40){
			hours = hours - 40;
			salary = 400+hours * 15;
		}
		else{
			salary = hours * 10;
		}
		printf("Enter hourly rate of the worker ($00.00): 10.00\n");
		printf("Salary is $%d\n", salary);
		printf("\n");
	}
	system("pause");
}