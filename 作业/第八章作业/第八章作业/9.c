//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	void tran(int (*p)[3]);//声明函数
//	int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i, j;
//	printf("原来的数组为：\n");//提示行
//	for (i = 0; i < 3; i++)//输出原来数组
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}printf("\n");
//	}
//	int (*p)[3] = a;//定义指针变量
//	tran(p);//调用函数
//	return 0;
//}
//void tran(int (*p)[3])
//{
//	int i, j;
//	int b[3][3];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			b[i][j] = *(*(p + j) + i);//将a[i][j]的值赋给b[i][j]
//		};
//	}
//	printf("置换后的数组为：\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d\t", b[i][j]);//输出置换后的数组
//
//		}printf("\n");
//	}
//}