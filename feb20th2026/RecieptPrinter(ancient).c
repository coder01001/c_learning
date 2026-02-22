#include <stdio.h>

int main(void)
{
	int itemNumber;
	float unitPrice;
	int month;
	int day;
	int year;

	printf("Item NumberID: ");
	scanf_s("%d", &itemNumber);

	printf("Unit cost: ");
	scanf_s("%g", &unitPrice);

	printf("Date of purchase in MM/DD/YYYY: ");
	scanf_s("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\tR %g\t\t%d/%d/%d", itemNumber, unitPrice, month, day, year);

	return 0;
}
