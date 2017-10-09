#include<stdio.h>
#include<math.h>
int main(void)
{
	unsigned int year;
	double amount;
	double principal = 5000.00;
	double rate;

	printf("%4s%21s\n", "year", "amount on deposit");
	for (year = 1; year <= 15; ++year){
		for (rate = 0.10; rate < 0.125; rate += 0.005){
			amount = principal * pow(1.0 + rate, year);
			printf("%4u%21.2f\n", year, amount);
		}
	}
	system("pause");
	return 0;
}