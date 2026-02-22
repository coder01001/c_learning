#include <stdio.h>

int main(void)
{
	int first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth, eleventh;
	int pAddOne, pAddTwo, pMulti, pRemainder, pCheck;

	printf("Enter your bar code number here: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first, &second, &third, &fourth, &fifth, &sixth, &seventh, &eighth, &ninth, &tenth, &eleventh);

	pAddOne = first + third + fifth + seventh + ninth + eleventh;
	pAddTwo = second + fourth + sixth + eighth + tenth;		
	pMulti = (pAddOne * 3) + pAddTwo - 1;						
	pRemainder = pMulti % 10;

	pCheck = 9 - pRemainder;

	printf("Your check number: %d", pCheck);

	return 0;
}
