#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

typedef long long int ll;

ll quickpow(ll base, ll pow, int mode)
{
	ll res = 1;
	while (pow)
	{
		if (pow & 1) res = res * base % mode;
		pow >>= 1;
		base = base * base % mode;
	}
	return res;
}

int main()
{
	int T;
	ll N;
	while (scanf("%d", &T) && T != 0)
	{
		for (int i = 0; i < T; i++)
		{
			scanf("%lld", &N);
			printf("Case %lld: %lld\n", i + 1, (quickpow(2, N, 100) + quickpow(2, N - 1, 100) * (quickpow(2, N - 1, 100) - 1)) % 100);
		}
		printf("\n");
	}
	return 0;
}
