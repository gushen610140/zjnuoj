#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//阶乘
long long int fac(long long int x)
{
	long long int y = 1;
	for (long long int i = x; i > 0; i--)
		y *= i;
	return y;
}

//组合
long long int combine(long long int x, long long int y)
{
	long long int res;
	res = fac(y) / fac(y - x) / fac(x);
	return res;
}

int main()
{
	//由数学推导得卡特兰数=C(n, 2n) / (n+1)
	int n;
	long long int res = 1;
	scanf("%d", &n);
	//printf("%d", combine(n, 2 * n) / (n + 1));  此方法空间不足
	for (int i = 2; i <= n; i++)
		res = res * (4 * i - 2) / (i + 1);
	printf("%d", res);
	return 0;
}
