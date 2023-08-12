#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void quicksort(int* arr, int begin, int end)
{
	if (begin > end)
		return;
	int tmp;
	int i = begin;
	int j = end;
	int base = arr[begin];
	while (i < j)
	{
		while (arr[j] >= base && i < j) j--;
		while (arr[i] <= base && i < j) i++;
		if (i != j)
		{
			tmp = arr[j]; arr[j] = arr[i]; arr[i] = tmp;
		}
	}
	arr[begin] = arr[i]; arr[i] = base;
	quicksort(arr, begin, i - 1);
	quicksort(arr, i + 1, end);
}

int arr[1000000];

int main()
{
	int n, count = 1;
	scanf("%d", &n);
	while (n != -1)
	{
		for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
		quicksort(arr, 0, n - 1);
		printf("Case number:%d\n", count);
		count += 1;
		printf("Number of elements:%d\n", n);
		for (int i = 0; i < n - 1; i++) printf("%d ", arr[i]);
		printf("%d\n", arr[n - 1]);
		scanf("%d", &n);
	}
	return 0;
}
