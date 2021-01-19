#define N 15//定义魔方阵的最大阶数

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[N][N];
	int i, j, n, k;
	printf("请输入魔方阵的阶数（为一个奇数）：\n");
	scanf("%d", &n);
	if ((n % 2) == 0)//提醒结果错误
		printf("错误！！！请输入奇数，奇数啊，不能被二整除的那种！！！\n看吧下面是错误结果\n");
	for (i = 0, j = 0; i<n; i++)//为了判断位置是否被先前的数占据，将魔方阵置零
	{
		for (j; j < n; j++)
			a[i][j] = 0;
		j = 0;
	}
	//下面开始建立魔方阵
	i = 0;
	j = (n - 1) / 2;
	a[0][j] = 1;
	for (k = 2; k <= n*n; k++)
	{
		i = i - 1;
		j = j + 1;
		if (i < 0 && j > n-1)//当下一个数在边缘时的操作
		{
			i = n - 1, j = 0;
		}
		else {
			if (i < 0)
				i = n-1;
			if (j > n-1)
				j = 0;
		}if (a[i][j] == 0)//判断该位置是否已经有数
			a[i][j] = k;
		else {
			i = i + 2; j = j - 1;
			if (j<0 && i>n - 1)
				i = 1, j = n - 1;

			a[i][j] = k;
		}


	}
	printf("%d阶魔方阵为：\n", n);
	for (i = 0; i <= n - 1; i++)//输出魔方阵
	{
		for (j = 0; j <= n - 1; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	return 0;

}
