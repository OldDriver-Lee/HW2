#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int acconter;
	float blance, charges, credits, limit, newblance;
	while (acconter = -1){
		printf("Enter account number (-1 to end):");
		scanf("%d", &acconter);
		
		if (acconter == -1){
			printf("Bye Bye!\n");
			system("pause");
			return 0;
		}

		printf("Enter beginning blance:");
		scanf("%f", &blance);
		printf("Enter  toltal charges:");
		scanf("%f", &charges);
		printf("Enter toltal credits:");
		scanf("%f", &credits);
		printf("Enter credit limit:");
		scanf("%f", &limit);
		printf("\n");

		newblance = blance + charges - credits;
		if (newblance > limit){
			printf("Accounter------>%d\n", acconter);
			printf("Credit limit--->%.2f\n", limit);
			printf("Blance--------->%.2f\n", newblance);
			printf("Your Credit Limit Is Fucking Exceeded\n");
			printf("\n");
		}	
	}
	system("pause");
}
