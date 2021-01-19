//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int a[3][3] = { { 10, 20, 30 }, { 40, 50, 60 }, { 70, 80, 90 } };
//int main()
//{
//	int trans(int m, int n);
//	int i=0, j=0, t;
//	printf("原来的数组是：\n");
//	for (int m = 0, n = 0; m < 3; m++)
//	{
//		for (n; n < 3; n++)
//			printf("%d\t", a[m][n]);
//		n = 0;
//		printf("\n");
//	}
//	if (i == 0)
//	{
//		for (j = 0; j < 3; j++)
//			trans(i, j);
//		i++;
//	}
//	if (i == 1)
//	{
//		for (j=1; j < 3; j++)
//			trans(i, j);
//	}
//
//	printf("转化后的数组为：\n");
//	for (int m = 0, n = 0; m < 3; m++)
//	{
//		for (n; n < 3; n++)
//			printf("%d\t", a[m][n]);
//		n = 0;
//		printf("\n");
//	}
//	return 0;
//}
//int trans(int m, int n)
//{
//	int t;
//	t = a[m][n];
//	a[m][n] = a[n][m];
//	a[n][m] = t;
//	return(a[m][n]);
//}