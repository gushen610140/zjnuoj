#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int sol(int x)
{
	if (x == 2) return 1;
	if (x == 3) return 2;
	int dp[50] = { 0 };
	dp[0] = 0; dp[1] = 0; dp[2] = 1; dp[3] = 2;
	for (int i = 4; i <= x; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	return dp[x];
}


int main()
{
	int T, M;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &M);
		printf("%d\n", sol(M));
	}
	return 0;
}