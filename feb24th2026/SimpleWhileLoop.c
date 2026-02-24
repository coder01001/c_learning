#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int n, i;
	i = 1;
	n = 1000;

	while (i < n)
	{
		printf("%d\n", i);

		i = i * 2;

	}

	printf("%d", i);


	return 0;

	// Notice how there is no break statement in the loop? Thats because it is not necessary as the function inside the loop that is done everytime i < n
	// eventually results in i > n which would then cause the loop to be false and exit itself, the i that is printed during the loop is not the final i
	// however, it is the final i that the loop prints, but the final number stored in i would be double that of the final number printed without
	// the final print statement at the bottom, as the the loop does not printf the final variable due to the loop breaking, just some food for thought :D
}
