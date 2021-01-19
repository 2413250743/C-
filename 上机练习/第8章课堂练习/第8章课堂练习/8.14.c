//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	void aver(float *p, int n);//平均成绩
//	void printfn(float(*p)[4], int n);//第n个学生平均分
//	float a[3][4] = { 65, 67, 70, 60, 80, 87, 90, 81, 90, 99, 100, 98 };
//	printf("三个学生的成绩分别为:\n65, 67, 70, 60;\n80, 87, 90, 81;\n90, 99, 100, 98\n");
//	aver(a, 3);
//	printf("请输入要输出分数的学生的序号(0到2）：\n");
//
//	scanf("%d", &n);
//	printf("该生的成绩分别为:\n");
//	printfn(a, n);
//	return 0;
//}
//void aver(float *p,int n)//求平均成绩
//{
//	float sum=0,aver;
//	for (int i = 0; i < 4*n; i++)
//	{
//		sum = sum + *(p + i);
//	}
//	aver = sum / (4 * n);
//	printf("总平均分为：\n  %5.2f\n",aver);
//
//}
//void printfn(float(*p)[4], int n)//求第n个学生平均分
//{
//	int j;
//	for (j = 0; j < 4; j++)
//		printf("%5.2f ", *(*(p + n) + j));
//	printf("\n");
//}
