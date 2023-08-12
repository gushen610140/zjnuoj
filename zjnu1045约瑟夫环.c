/*
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//初始化创建链表，数据arr1，指针arr2
	int n;
	int arr1[100], arr2[100];
	scanf("%d", &n);
	//特殊判断n=1
	if (n == 1)
	{
		printf("1");
		return 0;
	}
	//填充数据
	for (int i = 0; i < n; i++)
	{
		arr1[i] = i;
		arr2[i] = i + 1;
	}
	//约瑟夫环连接
	arr2[n - 1] = 0;
	//双指针遍历链表
	int q = 0, p = 0;
	do
	{
		for (int i = 0; i<2; i++) //此处的i最大值+1意味着报数到x退出。如报到3退出是2
		{
			q = p;
			p = arr2[p];
		}
		//执行链表删除操作
		arr2[q] = arr2[p];
		p = arr2[p];
	} while (arr2[q] != arr2[p]);
	//打印数据,+1因为编号从1开始
	printf("%d", arr1[q] + 1);
	return 0;
}
*/