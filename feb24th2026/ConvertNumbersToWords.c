#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int userValue, tens, digits;

	printf("Enter a value (1 - 100): ");
	scanf_s("%d", &userValue);

	tens = userValue / 10;
	digits = userValue % 10;


	printf("Your number in words is: ");


	// This if statement handles if the value is special such as only one or only two, however i think it may be redundent however i do not care lmao: 

	if (userValue >= 1 && userValue <= 9)
	{
		switch (userValue)
		{
		case 1: printf("One");
			break;
		case 2: printf("Two");
			break;
		case 3: printf("Three");
			break;
		case 4: printf("Four");
			break;
		case 5: printf("Five");
			break;
		case 6: printf("Six");
			break;
		case 7: printf("Seven");
			break;
		case 8: printf("Eight");
			break;
		case 9: printf("Nine");
			break;
		}
	}

	// This if statement handles if the user value is a special case like ten or twelve: 

	if (userValue >= 10 && userValue <= 19)
	{
		switch (userValue)
		{
		case 10: printf("Ten");
			break;
		case 11: printf("Eleven");
			break;
		case 12: printf("Twelve");
			break;
		case 13 : printf("Thirteen");
			break;
		case 14: printf("Fourteen");
			break;
		case 15: printf("Fifteen");
			break;
		case 16: printf("Sixteen");
			break;
		case 17: printf("Seventeen");
			break;
		case 18: printf("Eightteen");
			break;
		case 19: printf("Nineteen");
			break;
		}
	}

	// Switch for the digit in tens: 

	switch (tens)
	{
	case 2: printf("Twenty");
		break;
	case 3: printf("Thirty");
		break;
	case 4: printf("Fourty");
		break;
	case 5: printf("Fifty");
		break;
	case 6: printf("Sixty");
		break;
	case 7: printf("Seventy");
		break;
	case 8: printf("Eighty");
		break;
	case 9: printf("Ninety");
		break;
	}

	// Switch For the digit in words: 

	if (userValue > 10)
	{
		switch (digits)
		{
		case 1: printf("-one");
			break;
		case 2: printf("-two");
			break;
		case 3: printf("-three");
			break;
		case 4: printf("-four");
			break;
		case 5: printf("-five");
			break;
		case 6: printf("-six");
			break;
		case 7: printf("-seven");
			break;
		case 8: printf("-eight");
			break;
		case 9: printf("-nine");
			break;
		}
	}
	// Special if statement to handle if the input is 100(the limit) so it can print one hundred: 

	if (userValue == 100)
	{
		printf("One hundred");
	}

	return 0;
	
}
