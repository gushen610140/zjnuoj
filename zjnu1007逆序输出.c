/*
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//��ʼ������
	unsigned int a;
	int anum[5];
	int anumcur = 4;
	int anums = 0;
	int lastcur = 0;
	int flag = 0;
	//��ȡ����
	scanf("%d", &a);
	//�������0����flag
	if (a == 0)
		flag = 1;
	//�ж�a��λ�������
	while (a != 0)
	{
		anum[anumcur] = a % 10;
		a  /= 10;
		anumcur--;
		anums++;
	}
	if (flag == 1)
		printf("1\n");
	else
		printf("%d\n", anums);
	//���a����λ�ϵ�����
	while (anumcur < 4)
	{
		anumcur++;
		if (anumcur != 4)
			printf("%d ", anum[anumcur]);
		else
			printf("%d\n", anum[anumcur]);
	}
	if (flag == 1)
		printf("0\n");
	//�������a
	while (lastcur < anums)
	{
		printf("%d", anum[anumcur]);
		anumcur--;
		lastcur++;
	}
	if (flag == 1)
		printf("0");
	//����
	return 0;
}
*/