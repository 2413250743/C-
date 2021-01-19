//#include<stdio.h>
//int main()
//{
//	int I, m, a;
//	float m1, m2, m4, m6, m10;
//	m1 = 10000 ;
//	m2 = 10000 + 7500;
//	m4 = 10000 + 7500 + 10000;
//	m6 = 10000 + 7500 + 10000 + 6000;
//	m10 = 10000 + 7500 + 10000 + 6000 + 6000;
//	printf("输入利润：");
//	scanf_s("%d", &I);
//	a = I / 100000;
//	if (a > 10) a = 10;
//
//	switch (a)
//	{
//	case 0:m = I*0.1; break;
//	case 1:m = m1 + (I - 100000)*0.075; break;
//	case 2:m = 2 + (I - 200000)*0.05; break;
//	case 4:m = m4 + (I - 400000)*0.03; break;
//	case 6:m = m6 + (I - 600000)*0.015; break;
//	case 10:m = m10 + (I - 1000000)*0.001; break;
//	
//	}
//	printf("奖金是%d\n", m);
//	return 0;
//
//
//}