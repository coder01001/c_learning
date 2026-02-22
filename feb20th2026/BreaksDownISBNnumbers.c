#include <stdio.h>

int main(void)
{
	int GSonePre;
	int groupID;
	int publisherCode;
	int itemNumber;
	int checkDigit;

	printf("Enter ISBN: ");
	scanf_s("%d-%d-%d-%d-%d", &GSonePre, &groupID, &publisherCode, &itemNumber, &checkDigit);

	printf("GS1 prefix: %d\n", GSonePre);
	printf("Group Identifier: %d\n", groupID);
	printf("Publisher Code: %d\n", publisherCode);
	printf("Item Number: %d\n", itemNumber);
	printf("Check Digit: %d\n", checkDigit);

	return 0;
}
