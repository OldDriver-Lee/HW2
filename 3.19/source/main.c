#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int principal, day;
	float interest, rate;
	while (principal = -1){
		printf("Enter loan principal(-1 to end):");
		scanf("%d", &principal);
		if (principal == -1){
			printf("Bye Bye!\n");
			system("pause");
			return 0;
		}
		printf("Enter interest rate:");
		scanf("%f", &rate);
		printf("Enter term of the loan in day:");
		scanf("%d", &day);
		
		interest = principal * rate * day / 365;
		printf("The interest charge is $%.2f\n", interest);
		printf("\n");	
	}
	system("pause");
}