#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int date1month, date1day, date1year;
	int date2month, date2day, date2year;
	int earlierMonth, earlierDay, earlierYear;
	int laterMonth, laterDay, laterYear;

	printf("Enter first date mm/dd/yy: ");
	scanf_s("%d/%d/%d", &date1month, &date1day, &date1year);

	printf("Enter second date mm/dd/yy: ");
	scanf_s("%d/%d/%d", &date2month, &date2day, &date2year);

	if (date1year > date2year)
	{
		earlierMonth = date2month;
		earlierDay = date2day;
		earlierYear = date2year;

		laterMonth = date1month;
		laterDay = date1day;
		laterYear = date1year;
	}
	else
	{
		earlierMonth = date1month;
		earlierDay = date1day;
		earlierYear = date1year;

		laterMonth = date2month;
		laterDay = date2day;
		laterYear = date2year;
	}

	if (date1year == date2year)
	{
		if (date1month > date2month)
		{
			earlierMonth = date2month;
			earlierDay = date2day;
			earlierYear = date2year;

			laterMonth = date1month;
			laterDay = date1day;
			laterYear = date1year;
		}
		else if (date1month < date2month)
		{
			earlierMonth = date1month;
			earlierDay = date1day;
			earlierYear = date1year;

			laterMonth = date2month;
			laterDay = date2day;
			laterYear = date2year;
		}
		else if (date1month == date2month)
		{
			if (date1day > date2day)
			{
				earlierMonth = date2month;
				earlierDay = date2day;
				earlierYear = date2year;

				laterMonth = date1month;
				laterDay = date1day;
				laterYear = date1year;
			}
			else
			{
				earlierMonth = date1month;
				earlierDay = date1day;
				earlierYear = date1year;

				laterMonth = date2month;
				laterDay = date2day;
				laterYear = date2year;
			}
		}
	}
	printf("%d/%d/%d is earlier than %d/%d/%d .", earlierMonth, earlierDay, earlierYear, laterMonth, laterDay, laterYear);

	return 0;
}
