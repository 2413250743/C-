//#define _crt_secure_no_warnings
//#include<stdio.h>
//
//int main(){
//
//	int uniqueness(int *a, int n);
//
//	int data[80] = { 1, 2,1, 2, 3, 4, 4, 3, 5, 5, 6, 7, 6, 7, 8, 9, 8, 9, 10, 10 };
//
//	int i, n = 20;
//
//	printf("the original data:\n");
//
//	for (i = 0; i<n; i++)
//
//		printf("%4d", data[i]);
//
//	n = uniqueness(data, n);
//
//
//	printf("\nthe data after deleted \n");
//
//	for (i = 0; i<n; i++)
//
//		printf("%4d", data[i]);
//
//	printf("\n");
//
//	return 0;
//
//}
//
//int uniqueness(int *a, int n)
//{
//	int i = 0; int j = 1; char b[80];
//	int m=0;
//	for (; *(a+i) != 0;i++)//��i+1�����ͺ������е����Ƚϣ�һֱ�Ƚϵ�����0
//	{
//		for (; *(a + i + j) != 0; j++)//ǰ�Ʋ���
//		{
//			if (*(a + i) == *(a + i + j))//�ж��Ƿ���ȣ�����������������
//			{
//				m++;
//				for (; *(a + i + j) != 0; j++)//���������е���ǰ��һλ
//					*(a + i + j) = *(a + j + i + 1);
//			}
//			
//		}j = 1;
//	}*(a + i ) = '\0';//�����ֹ��
//	for ( i = 0; *(a + i) != '\0';  i++)//�����鴫��b����
//		b[i] = *(a + i);
//	b[i] = '\0';
//	return(strlen(b));
//}