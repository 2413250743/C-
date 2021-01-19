//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//
//int main()
//{
//	void trans();
//	printf("原来的数组是：\n");
//	for (int m = 0, n = 0; m < 3; m++)
//	{
//		for (n; n < 3; n++)
//			printf("%d\t", a[m][n]);
//		n = 0;
//		printf("\n");
//	}
//	trans();
//	printf("转化后的数组为：\n");
//	for (int m = 0, n = 0; m < 3; m++)
//	{
//		for (n; n < 3; n++)
//			printf("%d\t", a[m][n]);
//		n = 0;
//		printf("\n");
//	}
//	return 0;
//	
//}
//void trans()
//{
//	a[3][3];
//	int i = 0, j = 0, t;
//	if (i == 0)
//	{
//
//		for (j; j < 3; j++)
//		{
//			t = a[i][j];
//			a[i][j] = a[j][i];
//			a[j][i] = t;
//		}; i++;
//	}
//	if (i == 1)
//	{
//		for (j=1; j < 3; j++)
//		{
//			t = a[i][j];
//			a[i][j] = a[j][i];
//			a[j][i] = t;
//		};
//	}
//}