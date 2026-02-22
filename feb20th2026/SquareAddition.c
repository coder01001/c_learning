#include <stdio.h>

int main(void)
{
	int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;
	int rowOne, rowTwo, rowThree, rowFour;
	int columnOne, columnTwo, columnThree, columnFour;
	int diagOne, diagTwo;

	printf("Enter 16 digits in any order: \n");
	scanf_s("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

	rowOne = one + two + three + four;
	rowTwo = five + six + seven + eight;				// Operation for adding the rows together and supplying them into the variables for each sum
	rowThree = nine + ten + eleven + twelve;
	rowFour = thirteen + fourteen + fifteen + sixteen;

	columnOne = one + five + nine + thirteen;
	columnTwo = two + six + ten + fourteen;				// Operation for adding the columns and supplying them into the variables
	columnThree = three + seven + eleven + fifteen;
	columnFour = four + eight + twelve + sixteen;

	diagOne = one + six + eleven + sixteen;				// Operation for diagonals
	diagTwo = four + seven + ten + thirteen;


	printf("\n");
	printf("%d %d %d %d\n", one, two, three, four);
	printf("%d %d %d %d\n", five, six, seven, eight);
	printf("%d %d %d %d\n", nine, ten, eleven, twelve);
	printf("%d %d %d %d\n", thirteen, fourteen, fifteen, sixteen);

	printf("Row Sums: %d %d %d %d\n", rowOne, rowTwo, rowThree, rowFour);
	printf("Column Sums: %d %d %d %d\n", columnOne, columnTwo, columnThree, columnFour);
	printf("Diagonal sums: %d %d\n", diagOne, diagTwo);

	return 0;
}
