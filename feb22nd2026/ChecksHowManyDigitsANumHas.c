#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int number;

	printf("Enter your number: ");
	scanf_s("%d", &number);

	if (number < 10)
	{
		printf("Your number has 1 digit in it!");
	}
	else if (number <= 99)
	{
		printf("Your number has 2 digits in it!");
	}
	else if (number <= 999)
	{
		printf("Your number has 3 digits in it!");
	}
	else
	{
		printf("Your number has 4 digits in it!");
	}

	return 0;
}
