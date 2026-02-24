#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int a, b, c, d;
	int max1, max2, min1, min2;
	int max, min;

	printf("Enter 4 different numbres: ");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	
	if (a > b)
	{
		max1 = a;
		min1 = b;
	}
	else
	{
		max1 = b;
		min1 = a;
	}
	if (c > d)
	{
		max2 = c;
		min2 = d;
	}
	else
	{
		max2 = d;
		min2 = c;
	}

	if (max1 > max2)
	{
		max = max1;
	}
	else
	{
		max = max2;
	}
	if (min1 < min2)
	{
		min = min1;
	}
	else
	{
		min = min2;
	}

	printf("Maximum Value: %d\n", max);
	printf("Minimum Value: %d\n", min);
	
	return 0;
}
