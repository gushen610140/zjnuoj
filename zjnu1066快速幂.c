/*
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����ѧ��an = 2 ^ (n-1) + 1, Sn = 2 ^ n +n -1

//��������߳˷�Ч��
int pow2(int x)
{
	int i = 2, y = 1;
	for (; x != 0; x >>= 1)
	{
		if ((x & 1) == 1)
			y = y * i % 9973; //����ȡģ��ֹ���
		i = i * i % 9973;
	}
	return y;
}

int main()
{
	int T, i, n;
	int sum = 0;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d", &n);
		sum = (pow2(n) + n - 1) % 9973;
		printf("%d\n", sum);
	}
	return 0;
}
*/