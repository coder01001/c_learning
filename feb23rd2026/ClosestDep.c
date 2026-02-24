#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int userTimeMin, userTimeHour, timeSinceMidnight;

	printf("Enter time in 24 hour time: ");
	scanf_s("%d:%d", &userTimeHour, &userTimeMin);


	timeSinceMidnight = (userTimeHour * 60) + userTimeMin;


	if (timeSinceMidnight <= 531)
	{
		printf("Closest departure time is: 8:00 AM. Arriving at 10:16 AM.");
	}
	else if (timeSinceMidnight <= 631)
	{
		printf("Closest departure time is: 9:43 AM. Arriving at 11:52 AM.");
	}
	else if (timeSinceMidnight <= 723)
	{
		printf("Closest departure time is: 11:19 AM. Arriving at 1:31 PM.");
	}
	else if (timeSinceMidnight <= 803)
	{
		printf("Closest departure time is: 12:47 PM. Arriving at 3:00 PM.");
	}
	else if (timeSinceMidnight <= 892)
	{
		printf("Closest departure time is: 2:00 PM. Arriving at 4:08 PM.");
	}
	else if (timeSinceMidnight <= 1042)
	{
		printf("Closest departure time is: 3:45 PM. Arriving at 5:55 PM.");
	}
	else if (timeSinceMidnight <= 1222)
	{
		printf("Closest departure time is: 7:00 PM. Arriving at 9:20 PM.");
	}
	else if (timeSinceMidnight <= 1305)
	{
		printf("Closest departure time is: 9:45 PM. Arriving at 11:58 PM.");
	}
	else if (timeSinceMidnight > 1305)
	{
		printf("Closest departure time is: Tomorrow at 8:00 AM. Arriving Tomorrow at 10:16 AM");
	}

	return 0;
}
