#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
int main()
{
	//��ʼ��������������arr1��ָ��arr2
	int k;
	int arr1[30], arr2[30];
	scanf("%d", &k);
	//�������
	for (int i = 0; i < 2 * k; i++)
	{
		if (i < k)
			arr1[i] = 1;
		else
			arr1[i] = 0;
		arr2[i] = i + 1;
	}
	//Լɪ������
	arr2[2 * k - 1] = 0;
	//˫ָ���������
	int q = 0, p = 0;
	int m = 2;
	while (1)
	{
		printf("%d\n", m);
		//��������
		for (int i = 0; i < 2 * k; i++)
		{
			if (i < k)
				arr1[i] = 1;
			else
				arr1[i] = 0;
			arr2[i] = i + 1;
		}
		p = 0; q = 0;
		//Լɪ������
		arr2[2 * k - 1] = 0;
		//��ʼ���
		for (int i = 0; i < k; i++)
		{
			for (int j = 0; j < m - 1; j++) //�˴�ȷ������ʲô��
			{
				q = p;
				p = arr2[p];
			}
			//ִ������ɾ������
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
	//��ӡ����,+1��Ϊ��Ŵ�1��ʼ
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