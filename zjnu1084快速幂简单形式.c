#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int slv(int x, int y)
{
	int res = 1;
	while (y != 0)
	{
		if (y % 2 == 0)
		{
			y = y / 2;
			x = x * x % 1000;
		}
		else
		{
			y = y - 1;
			res = res * x % 1000;
		}
	}
	return res;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int res = slv(a, b);
	if (res < 10) printf("00%d", res);
	else if (res < 100) printf("0%d", res);
	else printf("%d", res);
	return 0;
}