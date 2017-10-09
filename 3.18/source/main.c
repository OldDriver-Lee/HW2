#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int sale;
	float salary;

	while (sale = -1){
		printf("Enter sales in dollars(-1 to end):");
		scanf("%d", &sale);
		if (sale == -1){
			printf("Bye Bye!\n");
			system("pause");
			return 0;
		}
		salary = 200 + (sale * 0.09);
		printf("Salary is:%.2f\n", salary);
		printf("\n");
		}
	system("pause");
}