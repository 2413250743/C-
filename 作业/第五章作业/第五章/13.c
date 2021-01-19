#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float x0 , x1 ;
	float a;

	printf("请输入a的值：\n");
	scanf("%f", &a);
	x0 = a, x1 = (x0 + (a / x0)) / 2;//赋初值
	while (x0 - x1 >= 1e-5&&x0 - x1 >= 1e-5)
	{
		x1 = (x0 + (a / x0))/2;
		x0 = x1;
		x1 = (x0 + (a / x0))/2;
	}//迭代执行判断
	printf("a的平方根为%lf\n", x1);
	return 0;

}
