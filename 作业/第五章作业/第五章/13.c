#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float x0 , x1 ;
	float a;

	printf("������a��ֵ��\n");
	scanf("%f", &a);
	x0 = a, x1 = (x0 + (a / x0)) / 2;//����ֵ
	while (x0 - x1 >= 1e-5&&x0 - x1 >= 1e-5)
	{
		x1 = (x0 + (a / x0))/2;
		x0 = x1;
		x1 = (x0 + (a / x0))/2;
	}//����ִ���ж�
	printf("a��ƽ����Ϊ%lf\n", x1);
	return 0;

}
