#include <stdio.h>

int main(void)
{
	int a, b;


	while (1) // While True means, while the program is running (cause this is in int main) the while loop is true, so this following code exuctes all the time
	{
		
		printf(">>> "); // This prints out >>> like a console does

		scanf_s("%d+%d", &a, &b); // This scanf is very important, without it, ">>>" in printf would print none stop
								  // It also is responsible for detecting input during the while loop for addition

		int sum = a + b;	// Determines the sum for a + b
		printf(">>> %d\n", sum); // Prints the sum of a + b and also a new ">>>" line for another input if wanted

	}

	// Further improvement can be made here I think, I could use arrays (havent gotten that far in the book xD) but i would also like to figure out how to
	// detect an enter key press so that instead of enter cause blank space, it would just print another ">>>" but normal terminals do this anyways.
	// I also am cheating a bit by using scanf, however I'm just not good enough to use other things like "fgets" so I'm sticking with this for now. :P
}
