#define N 15//����ħ�����������

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[N][N];
	int i, j, n, k;
	printf("������ħ����Ľ�����Ϊһ����������\n");
	scanf("%d", &n);
	if ((n % 2) == 0)//���ѽ������
		printf("���󣡣��������������������������ܱ������������֣�����\n���������Ǵ�����\n");
	for (i = 0, j = 0; i<n; i++)//Ϊ���ж�λ���Ƿ���ǰ����ռ�ݣ���ħ��������
	{
		for (j; j < n; j++)
			a[i][j] = 0;
		j = 0;
	}
	//���濪ʼ����ħ����
	i = 0;
	j = (n - 1) / 2;
	a[0][j] = 1;
	for (k = 2; k <= n*n; k++)
	{
		i = i - 1;
		j = j + 1;
		if (i < 0 && j > n-1)//����һ�����ڱ�Եʱ�Ĳ���
		{
			i = n - 1, j = 0;
		}
		else {
			if (i < 0)
				i = n-1;
			if (j > n-1)
				j = 0;
		}if (a[i][j] == 0)//�жϸ�λ���Ƿ��Ѿ�����
			a[i][j] = k;
		else {
			i = i + 2; j = j - 1;
			if (j<0 && i>n - 1)
				i = 1, j = n - 1;

			a[i][j] = k;
		}


	}
	printf("%d��ħ����Ϊ��\n", n);
	for (i = 0; i <= n - 1; i++)//���ħ����
	{
		for (j = 0; j <= n - 1; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	return 0;

}
