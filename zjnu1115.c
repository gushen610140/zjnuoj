#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n;
	int x, y;
	long long int dp[60];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &x, &y);
		dp[x] = 0;
		dp[x + 1] = 1;
		dp[x + 2] = 2;
		for (int i = x + 3; i <= y; i++)
			dp[i] = dp[i - 1] + dp[i - 2];
		printf("%lld\n", dp[y]);
	}
	return 0;
}
