#include <stdio.h>

int main(void)
{
	while (1)
	{

		int first, third, fifth, seventh, ninth, eleventh;		// Variables for the first part of formula
		int second, fourth, sixth, eigth, tenth;				// Variables for second half
		int check;												// Check number variable
		int pAddOne, pAddTwo, pMulti, pRemainder, pCheck;		// Variables to store the different outcomes of each part of formula and
		
		int itemCode;

		printf("Enter your first single digit: ");
		scanf_s("%d", &first);

		printf("enter your first segmant of 5 digit numbers: ");
		scanf_s("%1d%1d%1d%1d%1d", &second, &third, &fourth, &fifth, &sixth);

		printf("Enter your second segment of 5 digit numbers: ");
		scanf_s("%1d%1d%1d%1d%1d", &seventh, &eigth, &ninth, &tenth, &eleventh);

		printf("enter your check digit: ");
		scanf_s("%d", &check);

		pAddOne = first + third + fifth + seventh + ninth + eleventh;
		pAddTwo = second + fourth + sixth + eigth + tenth;				// This is the formula for checking whether a barcode is valid, compares certain digits
		pMulti = (pAddOne * 3) + pAddTwo - 1;							// Using a formula against the check number provided, if the formula matches the check
		pRemainder = pMulti % 10;										// Number then the result will be a valid item!

		pCheck = 9 - pRemainder;

		itemCode = (seventh * 10000) + (eigth * 1000) + (ninth * 100) + (tenth * 10) + eleventh;

		if (pCheck == check)		// Checks the number to see if it matches with the check number that was given by the item code
		{
			printf("Scan successful! Your check number is: %d\n", pCheck);

			// These just check against the first number to see what type of item it is, theres changes I can make to scanf to get the item name and everything
			// but havent gotten that far.

			if (first == 0)
			{
				printf("This item is a food item\n");
			}
			else if (first == 2)
			{
				printf("This item must be weighed\n");
			}
			else if (first == 3)
			{
				printf("This item is a form of medication\n");
			}
			else if (first == 5)
			{
				printf("This is a coupon\n");
			}
		}
		else
		{
			printf("Sorry this item is invalid!\n");
		}
		
		if (itemCode == 24128)
		{
			printf("Chocolate Milk R35\n");
		}
		else if (itemCode == 10042)
		{
			printf("Tylenol R23\n");
		}
		else if (itemCode == 77712)
		{
			printf("R20 off final total!\n");
		}
		else if (itemCode == 10201)
		{
			printf("Garlic R43\n");
		}
		else
		{
			printf("This item could not be found!\n");
		}
	}
}
