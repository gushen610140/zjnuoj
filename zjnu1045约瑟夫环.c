/*
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//��ʼ��������������arr1��ָ��arr2
	int n;
	int arr1[100], arr2[100];
	scanf("%d", &n);
	//�����ж�n=1
	if (n == 1)
	{
		printf("1");
		return 0;
	}
	//�������
	for (int i = 0; i < n; i++)
	{
		arr1[i] = i;
		arr2[i] = i + 1;
	}
	//Լɪ������
	arr2[n - 1] = 0;
	//˫ָ���������
	int q = 0, p = 0;
	do
	{
		for (int i = 0; i<2; i++) //�˴���i���ֵ+1��ζ�ű�����x�˳����籨��3�˳���2
		{
			q = p;
			p = arr2[p];
		}
		//ִ������ɾ������
		arr2[q] = arr2[p];
		p = arr2[p];
	} while (arr2[q] != arr2[p]);
	//��ӡ����,+1��Ϊ��Ŵ�1��ʼ
	printf("%d", arr1[q] + 1);
	return 0;
}
*/