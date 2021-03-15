#include <stdio.h>

int main()
{
	char name1[30], name2[30];
	int i = 0;

	for (i = 0; i < 2; i++)
	{
		scanf("%[^\n]s", name1);
		scanf("%[^\n]s", name2);
	}

	while (name1[i] != '\0')
	{
		printf("%c\n", name1[i]);
		i++;
	}

	return 0;
}
