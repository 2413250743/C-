//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i , j ;
//	int a[10][10] = { { 1 } };//定义10行数组
//	for (i=0; i <= 9; i++)
//		a[i][i] = 1,a[i][0] = 1;//对角线和第一列元素为1
//	for (i = 2, j = 1; i <= 9; i++)//前两行已经赋值完毕，从每行的第二列开始赋值
//	{
//		for (j=1; j <= i; j++)
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];//对数组赋值
//	}
//	for (i = 0, j = 0; i <= 9; i++)
//	{
//		for (; i >= j; j++)
//			printf("%d\t", a[i][j]);
//		printf("\n"); j = 0;//让j重新开始
//	}
//	return 0;
//}

	//------------------------------
	//for (; i <= 9; i++)
	//{
	//	for (j=0; j <= 9; j = j + 1);
	//	{if (j = 0)
	//		a[i][j] = 1;
	//	else
	//		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];//对数组赋值
	//	};
	//}
	//for (i = 0, j = 0; i <= 9; i++)//输出数组
	//{
	//	for (j=0; j <= 9; j++)
	//		printf("%d\t", a[i][j]);
	//	printf("\n");//输出一行换行
	//}
	