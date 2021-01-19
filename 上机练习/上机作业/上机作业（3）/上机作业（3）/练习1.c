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
//	for (; *(a+i) != 0;i++)//第i+1个数和后面所有的数比较，一直比较到出现0
//	{
//		for (; *(a + i + j) != 0; j++)//前移步骤
//		{
//			if (*(a + i) == *(a + i + j))//判断是否相等，若相等则↓↓↓↓↓
//			{
//				m++;
//				for (; *(a + i + j) != 0; j++)//将后面所有的数前移一位
//					*(a + i + j) = *(a + j + i + 1);
//			}
//			
//		}j = 1;
//	}*(a + i ) = '\0';//添加休止符
//	for ( i = 0; *(a + i) != '\0';  i++)//将数组传给b数组
//		b[i] = *(a + i);
//	b[i] = '\0';
//	return(strlen(b));
//}