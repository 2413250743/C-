//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	void aver(float (*p)[6]);//������ƽ���ֺ���
//	void sort1(float(*p)[6]);//�Ҳ�����ѧ��
//	void sort2(float(*p)[6]);
//		float stu[4][6];
//	int i, j; float(*p)[6] = stu;
//	for (i = 0; i < 4; i++)
//	{	printf("�������%d��ѧ����ѧ�ż�5�ſγ�,�ÿո����:\n", i + 1);
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
//	printf("��һ�ſε�ƽ������%5.2f\n",ave);
//
//}
//void sort1(float(*p)[6])
//{
//	printf("����ѧ�������ţ��Լ����ϣ�������\n");
//	int i, j,m=0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 1; j < 6; j++)
//		{
//			if (p[i][j] < 60)
//				m++; 
//			while (m == 2)
//			{
//				printf("ѧ��Ϊ��%1.0f\t\n�����ѧ�Ƴɼ�Ϊ��\n", p[i][0]);
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
//	printf("����ѧ��Ϊ���㣺\n");
//	for (i = 0; i < 4; i++)
//	{
//		ave[i] = (p[i][1] + p[i][2] + p[i][3] + p[i][4] + p[i][5])/5;
//		for (j = 1; j < 6; j++)
//		{
//			if (p[i][j] >= 85) m++;
//		}
//		if (m == 5 || ave[i] >= 90)
//			printf("ѧ�ţ�%1.0f\n", p[i][0]);
//		m = 0;
//	}
//
//}