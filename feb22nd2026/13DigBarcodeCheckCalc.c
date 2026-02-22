#include <stdio.h>

int main(void)
{
	int second, fourth, sixth, eighth, tenth, twelfth;
	int first, third, fifth, seventh, ninth, eleventh;
	int check;
	int addOne, addTwo, multiOne, pRemainder, pCheck;

	printf("Enter your 13 dig barcode here: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first, &second, &third, &fourth, &fifth, &sixth, &seventh, &eighth, &ninth, &tenth, &eleventh, &twelfth);

	addOne = second + fourth + sixth + eighth + tenth + twelfth;
	addTwo = first + third + fifth + seventh + ninth + eleventh;
	multiOne = (addOne * 3) + addTwo - 1;
	pRemainder = multiOne % 10;
	pCheck = 9 - pRemainder;

	printf("Your check digit should be: %d", pCheck);

	return 0;
}
