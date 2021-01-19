#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define Change 80
#define O 300
int main()
{
	int fun(int *p0, int *p1);
	int day[4];
	printf("  春节日期：2021.2.12，2022.2.1，2023.1.22，2024.2.10\n");
	day[0] = 17, day[1] = 28, day[2] = 38, day[3] = 20;//计算后得到天数传入数组
	printf("\t2021年的天数为17，\n\t2022年的天数为28，\n\t2023年的天数为38，\n\t2024年的天数为20.\n");//提示行
	int *p0 = day;
	int money[4], *p1 = money;
	fun(p0, p1);//调用函数
	printf("  以后的4年回重庆的花费分别为:\n\t2021年：%d元\t2022年:%d元\t2023年:%d元\t2024年:%d元\n", money[0], money[1], money[2], money[3]);
	return 0;

}
int fun(int *p0,int *p1)//通过指针将费用传给数组
{
	int fare(int day);//调用函数
	p1[0] = fare(p0[0]);
	p1[1] = fare(p0[1]);
	p1[2] = fare(p0[2]);
	p1[3] = fare(p0[3]);
}
int fare(int day)//根据天数计算花费的函数
{
	if (day <= 15)
		return(300 + day * 80);
	else if (day < 20)
		return(1500);
	else if(day <= 34)
		return(1500 - (day - 19) * 80);
	else return(300);
	
}