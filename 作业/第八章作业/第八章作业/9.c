//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	void tran(int (*p)[3]);//��������
//	int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i, j;
//	printf("ԭ��������Ϊ��\n");//��ʾ��
//	for (i = 0; i < 3; i++)//���ԭ������
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}printf("\n");
//	}
//	int (*p)[3] = a;//����ָ�����
//	tran(p);//���ú���
//	return 0;
//}
//void tran(int (*p)[3])
//{
//	int i, j;
//	int b[3][3];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			b[i][j] = *(*(p + j) + i);//��a[i][j]��ֵ����b[i][j]
//		};
//	}
//	printf("�û��������Ϊ��\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d\t", b[i][j]);//����û��������
//
//		}printf("\n");
//	}
//}