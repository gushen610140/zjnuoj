/*
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 1, tmp1, tmp2;
	int arr[26][2];
	//持续获取
	while (n != 0)
	{
		//获取输入
		scanf("%d", &n);
		if (n == 0) break;
		for (int i = 0; i < n; i++)
			scanf("%d%d", &arr[i][0], &arr[i][1]);
		//冒泡排序
		for (int i = 0; i < n - 1; i++)
			for (int j = 0; j < n - 1 - i; j++)
				if (arr[j][1] > arr[j + 1][1])
				{
					tmp1 = arr[j][1]; tmp2 = arr[j][0];
					arr[j][1] = arr[j + 1][1]; arr[j][0] = arr[j + 1][0];
					arr[j + 1][1] = tmp1; arr[j + 1][0] = tmp2;
				}
		//检测
		int cur = 0;
		int count = 1;
		for (int curm = 1; curm < n; curm++)
			if (arr[cur][1] <= arr[curm][0])
			{
				cur = curm;
				count++;
			}
			printf("%d\n", count);
	}
	return 0;
}
*/