#define _crt_secure_no_warnings
#include<stdio.h>;
#include <string.h>
int main()
{
	float r, h, p = 3.1415926;
	float l, s1, s2, v1, v2;//s1圆, s2球, v1球, v2圆柱
	printf("请分别输入圆半径r，空格，圆柱高度h，并按回车开始计算\n");
	scanf("%f%f", &r, &h);
	l = 2 * p*r, s1 = p*p*r, s2 = 4 * p*r*r, v1 = (4 * p*r*r*r) / 3, v2 = s1*h;
	printf("圆周长为%6.2f，\n圆面积为%6.2f，\n球表面积为%6.2f，\n球体积为%6.2f，\n圆柱体积为%6.2f\n", l, s1, s2, v1, v2);
	return 0;

}