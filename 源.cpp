#include<stdio.h>
#define n 4
int main()
{
	int i, j, wq;
	int arr[5] = { 0 };
	for (i = 0; i <= 4; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i <= 3; i++)
	{
		for (j = 1; j <= n-i; j++)
		{
			if (arr[i] > arr[i + 1])
			{
				wq = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = wq;
			}
		}
	}
	for (i = 0; i <= 4; i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;
}