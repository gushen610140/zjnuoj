/*
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//初始化数据
	unsigned int a;
	int anum[5];
	int anumcur = 4;
	int anums = 0;
	int lastcur = 0;
	int flag = 0;
	//获取输入
	scanf("%d", &a);
	//特殊情况0启动flag
	if (a == 0)
		flag = 1;
	//判断a的位数并输出
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
	//输出a各个位上的数字
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
	//倒序输出a
	while (lastcur < anums)
	{
		printf("%d", anum[anumcur]);
		anumcur--;
		lastcur++;
	}
	if (flag == 1)
		printf("0");
	//结束
	return 0;
}
*/