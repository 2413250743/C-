//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//float grade[10][5]/* = { 55, 3, 87, 43, 56,
//96, 87, 34, 62, 90,
//31, 79, 72, 84, 9, 
//30, 50, 94, 28, 38, 
//59, 20, 91, 24, 65,
//54, 60, 82, 86, 68, 
//49, 67, 86, 45, 52, 
//21, 93, 12, 70, 95,
//51, 36, 93, 72, 27,
//51, 49, 21, 40, 54 }*/;//����ȫ������
//int main()
//{
//	void aver();//������ƽ���ֺ���
//	void each();//ÿ�ſε�ƽ����
//	void search();//Ѱ����߳ɼ���Ӧ��
//	void func();//���㷽��
//	int i, j;
//	for (i = 1; i <= 10; i++)//����ѧ���ɼ�
//	{
//		printf("�������%d��ѧ���ɼ�:\n", i);
//		for (j = 0; j < 5; j++)
//			scanf("%d", &grade[i - 1][j]);
//		j = 0;
//	}
//	aver();
//	each();
//	search();
//	func();
//	return 0;
//
//}
//void aver()//���㲢���ƽ����
//{
//	int i, j;
//	float a;
//	printf("��һ����ʮ��ѧ����ƽ���ֱַ�\n");
//	for (i =1; i <= 10; i++)
//	{
//		a = (grade[i - 1][0] + grade[i - 1][1] + grade[i - 1][2] + grade[i - 1][3] + grade[i - 1][4]) / 5;
//		printf("%5.2f ", a);
//	}
//	printf("\n");
//}
//void each()//ÿ�ſε�ƽ����
//{
//	int i,j;
//	float a,sum=0;
//	for (j = 0; j < 5; j++)
//	{
//		printf("��%d��ѧ�Ƶ�ƽ���ɼ�Ϊ��\n", j + 1);
//		for (i = 0; i < 10; i++)
//		{
//			sum = sum + grade[i][j];
//		}a = sum / 10; i = 0;
//		printf("%5.2f\n", a);
//		sum = 0;
//	}
//}
//void search()//Ѱ����߳ɼ���Ӧ��
//{
//	int i =0, j, m,n;
//	float max = grade[0][0];
//	for (; i < 10; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (max < grade[i][j])
//			{
//				max = grade[i][j]; m = i, n = j
//	;
//			}
//		};
//	}
//	printf("��ߵķ���Ϊ%5.2f����Ӧ��%d��ѧ������%d�ſ�\n", max, m+1 , n+1 );
//}
//void func()//���㷽��
//{
//	int i=0,j=0;
//	float sum, aver,sigma=0,delt1,delt2,a=0,b=0;
//	for (i; i < 10; i++)
//	{
//		for (; j < 5; j++)
//		{
//			delt1 = (grade[i][j] * grade[i][j]);
//			delt2 = (grade[i][j] / 50)*(grade[i][j] / 50);
//			a = a + delt1, b = b + delt2;
//		}j = 0; 
//	}
//	sigma = a - b;
//	printf("����Ϊ%5.2f", sigma);
//}