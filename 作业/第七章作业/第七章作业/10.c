//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void fun(char x[], char y[]);
//	char a[100], b[30] = { '\0' };
//	printf("������һ�����ӣ�\n");
//	gets(a);	
//	printf("�����������ĵ�����: ");
//	fun(a, b);
//
//	return 0;
//}
//void fun(char x[], char y[])
//{
//	int j = 0, Lmax=0, L2; int i = 0;
//	int T1, T2, T3, T4;
//	int a;
//	T1 = 0;
//	for (; i <= (a = strlen(x));)
//	{
//		if (x[i] != ' ')
//		{
//			y[j] = x[i], j++;
//			Lmax = strlen(y); i++, T2 = i; //����һ�����ʵĳ��ȼ����
//		}
//		else { i++; break; }
//	}; 
//	for (int m = 0; m <= 14; m++)//��y��������
//	{
//		y[m] = '\0';
//	}
//	for (T3=i,j = 0; i < (a=strlen(x)); i++)//�ȽϺ���ĵ��ʳ��Ȳ���¼��ֹ
//	{
//		
//		if (x[i] != ' '&&x[i]!='\0')
//		{
//			y[j] = x[i], j++; L2 = strlen(y);
//			
//		}
//		else if (Lmax < (L2 = strlen(y)))//������ֹ
//		{T4 = i; 
//			T1 = T3, T2 = T4;
//			Lmax = L2;
//			j = 0;
//		for (int m = 0; m <= 20; m++)//��y��������
//		{
//			y[m] = '\0';
//		};
//		T3 = i + 1;
//		}
//		else {
//			for (int m = 0; m <=20 ; m++)//��y��������
//			{
//				y[m] = '\0';
//			}
//			T3 = i + 1; j = 0;
//		}
//		
//	}L2 = strlen(y);
//
//	if (Lmax < L2) //��ֹ���һ��������ʣ�������ֹ
//	{
//		T4 = i;
//		T1 = T3, T2 = T4;
//		Lmax = L2;
//	}
//		for (int m = 0; m <= 29; m++)//��y��������
//	{
//		y[m] = '\0';
//	}; int n = T1;
//	for (int j=0; j < (T2-n); T1++,j++)//�������
//	{
//		y[j] = x[T1];
//	}
//	puts(y);
//}
