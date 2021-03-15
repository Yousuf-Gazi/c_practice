#include <stdio.h>

int main()
{
	char razin[50];
	printf("Enter your email: \n");
	scanf("%[^\n]", razin);
	printf("you enter: %s\n", razin);

	return 0;
}
