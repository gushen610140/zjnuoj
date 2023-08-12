#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
int main()
{
	//初始化创建链表，数据arr1，指针arr2
	int k;
	int arr1[30], arr2[30];
	scanf("%d", &k);
	//填充数据
	for (int i = 0; i < 2 * k; i++)
	{
		if (i < k)
			arr1[i] = 1;
		else
			arr1[i] = 0;
		arr2[i] = i + 1;
	}
	//约瑟夫环连接
	arr2[2 * k - 1] = 0;
	//双指针遍历链表
	int q = 0, p = 0;
	int m = 2;
	while (1)
	{
		printf("%d\n", m);
		//重置数据
		for (int i = 0; i < 2 * k; i++)
		{
			if (i < k)
				arr1[i] = 1;
			else
				arr1[i] = 0;
			arr2[i] = i + 1;
		}
		p = 0; q = 0;
		//约瑟夫环连接
		arr2[2 * k - 1] = 0;
		//开始检测
		for (int i = 0; i < k; i++)
		{
			for (int j = 0; j < m - 1; j++) //此处确定报道什么数
			{
				q = p;
				p = arr2[p];
			}
			//执行链表删除操作
			if (arr1[p] == 0)
			{
				arr2[q] = arr2[p];
				p = arr2[p];
			}
			else
				goto skip;
		}
		printf("%d", m);
		return 1;
		skip:
			m++;
	}
	//打印数据,+1因为编号从1开始
	printf("%d", arr1[q] + 1);
	return 0;
}
*/

/*
int main()
{
	int flag = 1, k, m = 1;
	scanf("%d", &k);
	while (flag)
	{
		m++;
		int index = 0;
		for (int i = 0; i < k; i++)
		{
			index = (index + m - 1) % (2 * k - i);
			if (index < k) break;
			if (i == k - 1) flag = 0;
		}
	}
	printf("%d", m);
	return 0;
}
*/