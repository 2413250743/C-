//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	void aver(float *p, int n);//ƽ���ɼ�
//	void printfn(float(*p)[4], int n);//��n��ѧ��ƽ����
//	float a[3][4] = { 65, 67, 70, 60, 80, 87, 90, 81, 90, 99, 100, 98 };
//	printf("����ѧ���ĳɼ��ֱ�Ϊ:\n65, 67, 70, 60;\n80, 87, 90, 81;\n90, 99, 100, 98\n");
//	aver(a, 3);
//	printf("������Ҫ���������ѧ�������(0��2����\n");
//
//	scanf("%d", &n);
//	printf("�����ĳɼ��ֱ�Ϊ:\n");
//	printfn(a, n);
//	return 0;
//}
//void aver(float *p,int n)//��ƽ���ɼ�
//{
//	float sum=0,aver;
//	for (int i = 0; i < 4*n; i++)
//	{
//		sum = sum + *(p + i);
//	}
//	aver = sum / (4 * n);
//	printf("��ƽ����Ϊ��\n  %5.2f\n",aver);
//
//}
//void printfn(float(*p)[4], int n)//���n��ѧ��ƽ����
//{
//	int j;
//	for (j = 0; j < 4; j++)
//		printf("%5.2f ", *(*(p + n) + j));
//	printf("\n");
//}
