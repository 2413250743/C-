#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	void swap(int *m1, int *m2);
		int a = 1, b = 2;
	int *p1, *p2;
	p1 = &a; p2 = &b;
	printf("%d %d\n", a, b);
	swap(p1, p2);
	printf("%d %d\n", a,b);
	return 0;
}
void swap(int *m1, int *m2)
{
	int t; 
	t = *m1; 
	*m1 = *m2;
	*m2 = t;
}//测试完成，调用函数改变指针地址不会改变主函数指针
