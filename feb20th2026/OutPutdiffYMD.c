#include <stdio.h>

int main(void)
{
	int year;
	int month;
	int day;

	printf("Enter your mm/dd/yyyy: ");
	scanf_s("%d/%d/%d", &month, &day, &year);

	printf("Your entered the date: %d%d%d", year, month, day);

	return 0;
}
