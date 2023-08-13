#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int arr[9001];
int n, m, x;

int main()
{
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
		scanf("%d", &m);
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &x);
			if (x <= n && x >= 1)
			{
				printf("%d\n", arr[x - 1]);
				for (int j = x - 1; j < n - 1; j++)
					arr[j] = arr[j + 1];
				n -= 1;
			}
			else
				printf("-1\n");
		}
	}
	return 0;
}