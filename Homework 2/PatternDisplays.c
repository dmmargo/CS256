//PatternDisplays

#include <stdio.h>

int main()
{
	printf("___________________________________________\n");
	printf("%s%20s\n","PatternA", "PatternB");
	printf("___________________________________________\n");

	for(int i = 0; i<=10; i++)
	{
		for(int j = 0; j<=i; j++)
		{
			printf("+");

		}
		printf("%20s", "");
		for(int k = 10; k>=i; k--)
		{

			printf("+");
		}
		printf("\n");
	}

	return 0;
}