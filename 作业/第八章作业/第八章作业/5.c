//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i=1 , j=0 ,n,m;
//	int a[50];//定义数组设立最大人数（50个人够多了吧喂）
//	printf("请输入人数n：\n");//提示行
//	scanf("%d", &n); m = n;
//	for (i = 0; i < n; i++)//将数组标号
//		a[i] = i+1;
//	i = 0;
//	while (n != 1)
//	{
//		if (a[i] != 0) j++;//若已经为零则j不加
//		if (j == 3)
//		{
//			a[i] = 0;//将该号退出
//			j = 0;
//			n--;
//		}
//		i++;
//		if (i == m) i = 0;//i返回首处
//		
//	}
//	
//
//	for (i = 0; i < m; i++)//输出最终结果
//	{
//		if (a[i] != 0)
//		{
//			printf("最后剩下为:第 (%d) 号那位\n",i+1); break;
//		}
//	}
//	return 0;
//}
