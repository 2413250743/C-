#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a[10] ;
int main()
{ int i = 0;
	printf("������10������\n");
	for (; i <= 9;i++)
		scanf("%d",&a[i]);

	
	void order(int a[], int n);
	order(a, 10);
	order(a, 10);
	order(a, 10);
	order(a, 10);
	order(a, 10);
	order(a, 10);
	order(a, 10);
	order(a, 10);
	order(a, 10);
	order(a, 10);//�Ƚ�10�δ�С��ÿ�ΰ����ķ������
	printf("������Ϊ��\n");
	for (i=0; i <= 9; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
void order(int a[],int n)
{
	int m, j,t;
	for (m = 0; m < n-1; m++)
	{
		if (a[m] > a[m + 1])
		{
			t=a[m+1];
			a[m + 1] = a[m];
			a[m] = t;

		}
	};
	

	return 0;
}
