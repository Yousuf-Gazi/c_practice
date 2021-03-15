#include <stdio.h>

int main()
{
	int size, i, value, sum;
	scanf("%d", &size);
	int arr[size];
	
	sum = 0;
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	printf("summation = %d\n", sum);

	return 0;
}
