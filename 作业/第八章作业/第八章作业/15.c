//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	void aver(float (*p)[6]);//声明求平均分函数
//	void sort1(float(*p)[6]);//找不及格学生
//	void sort2(float(*p)[6]);
//		float stu[4][6];
//	int i, j; float(*p)[6] = stu;
//	for (i = 0; i < 4; i++)
//	{	printf("请输入第%d个学生的学号及5门课程,用空格隔开:\n", i + 1);
//		for (j = 0; j < 6; j++)
//		{
//			scanf("%f", &stu[i][j]);
//		}		
//	}
//	aver(p);
//	printf("\n");
//	sort1(p);
//	sort2(p);
//	printf("\n");
//	return 0;
//}
//void aver(float (*p)[6])
//{
//	float ave;
//	ave = (p[0][1] + p[1][1] + p[2][1] + p[3][1]) / 4;
//	printf("第一门课的平均分是%5.2f\n",ave);
//
//}
//void sort1(float(*p)[6])
//{
//	printf("下列学生有两门（以及以上）不及格：\n");
//	int i, j,m=0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 1; j < 6; j++)
//		{
//			if (p[i][j] < 60)
//				m++; 
//			while (m == 2)
//			{
//				printf("学号为：%1.0f\t\n其各门学科成绩为：\n", p[i][0]);
//				for (j = 1; j < 6; j++)
//					printf("%5.2f\t", p[i][j]);
//				printf("\n");
//				break;
//			}
//		}
//		m = 0;
//	}
//	printf("\n");
//}
//void sort2(float(*p)[6])
//{
//	int i, j, m=0;
//	float ave[4];
//	printf("以下学生为优秀：\n");
//	for (i = 0; i < 4; i++)
//	{
//		ave[i] = (p[i][1] + p[i][2] + p[i][3] + p[i][4] + p[i][5])/5;
//		for (j = 1; j < 6; j++)
//		{
//			if (p[i][j] >= 85) m++;
//		}
//		if (m == 5 || ave[i] >= 90)
//			printf("学号：%1.0f\n", p[i][0]);
//		m = 0;
//	}
//
//}