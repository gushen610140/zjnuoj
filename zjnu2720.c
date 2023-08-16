#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

typedef long long int ll;

ll quickpow(ll base, ll pow, int mode)
{
	ll res = 1;
	while (pow)
	{
		if (pow & 1) res = base * res % mode;
		pow >>= 1;
		base = base * base % mode;
	}
	return res;
}

int main()
{
	ll y, t, res;
	scanf("%lld%lld", &y, &t);
	res = ((y + 1) * quickpow(2, t, 26) - 1) % 26;
	char str[101];
	scanf("%s", &str);
	int S = strlen(str);
	for (int i = 0; i < S; i++)
		if (str[i] >= 65 && str[i] <= 90) str[i] = ((str[i] - 65 + res) % 26) + 65;
		else str[i] = ((str[i] - 97 + res) % 26) + 97;
	printf("%s", str);
	return 0;
}
