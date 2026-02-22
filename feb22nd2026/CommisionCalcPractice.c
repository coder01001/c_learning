#include <stdio.h>

int main(void)
{
	float amount;
	float comm;

	printf("enter your amount: ");
	scanf_s("%f", &amount);

	if (amount < 2500)
	{
		comm = (amount * 0.017f) + 30;
		printf("Commision: %f", comm);

		return 0;
	}
	else if (amount >= 2500 && amount <= 6249)
	{
		comm = (amount * 0.0066f) + 56;
		printf("Commision: %f", comm);

		return 0;
	}
	else if (amount >= 6250 && amount <= 20000)
	{
		comm = (amount * 0.0034f) + 76;
		printf("Commision: %f", comm);

		return 0;
	}
	else if (amount >= 20001 && amount <= 50000)
	{
		comm = (amount * 0.0022f) + 100;
		printf("Commision: %f", comm);

		return 0;
	}
	// Good progress on operators, BUT the (amount >=...) segment of the codes is redundant as from previous statements its already obvious to the IDE and
	// compiler that it cant be > the amount it HAS to be greater if it has gotten to the if else statement.

}
