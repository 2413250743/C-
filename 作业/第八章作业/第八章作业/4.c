//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int b[100] = {'\0'};//定义全局数组b
//int main()
//{
//	void trans(int *p);//声明调整函数
//		int m, n;
//		int a[100] = { '\0' }; int *p = a;
//	printf("请输入m,n(n为整数个数,m,n用空格隔开）:\n");//输入n来设置数组长度
//	scanf("%d%d", &m,&n);
//	printf("输入数组：\n");
//	for (int i = 0; i < n; i++)
//		scanf("%d",&a[i]);//得到整数组
//	trans(p,m,n);
//	printf("调整后的数组为：\n");
//	for (int i = 0; i < n; i++)//输出调整后的数组
//		printf("%d ", b[i]);
//	printf("\n");
//	return 0;
//}
//void trans(int *p,int m,int n)//定义调整函数
//{
//	int i = 0;
//	for (; i < m; i++)//将后m个数给b数组
//		b[i] = *(p + (n - m) + i);
//	for (i = 0; i < n - m; i++)//将前n-m个数后移
//		b[m+i] = *(p + i);
//}