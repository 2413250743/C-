#include<stdio.h>
int main()
{
	int i,n,m=0,h;
	printf("������Ҫ��������ķ�Χ�����ֵ\n");
	scanf_s("%d", &h);
	for (n = 2; n <= h; n=n+1)
	{

		for (i = 2; i <= n - 1; i++)
		if (n%i == 0) break;
		if (i==n)
		{
			printf("%d\t", n);
				m = m + 1; if (m % 12 == 0) printf("\n");
		}
		
	}printf("\n������\n");
	return 0;
	 

	
	
}