#include <stdio.h>

int main()
{
	int size, i, value;
	printf("Enter size: \n");
	scanf("%d", &size);

	int array[size];
	
	for (i = 0; i < size; i++)
	{
		scanf("%d", &value);
		array[i] = value;
		printf("array[%d] = %d\n", i, array[i]);
	}

	printf("%li\n", sizeof(array));

	return 0;
}
