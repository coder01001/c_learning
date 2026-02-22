#include <stdio.h>

int main(void)
{
	int a = 100;
	int b = 0;
	int max;

	max = (a > b) ? a : b; // If you dont understand (ur a dumbass) the statement reads: max = (value1 > value2) ? if true this value = max : if false this value = max

	printf("%d", max);
}
