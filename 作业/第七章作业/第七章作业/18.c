#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int judge(int year);//判断是否闰年
	int year, month, day, a; 
	int sum=0;
	int eachmonth0[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int eachmonth1[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	printf("请分别输入年月日并用空格隔开：\n");
	scanf("%d%d%d", &year, &month, &day);
	a = judge(year);
	if (a)
	{
		for (int i = 0; i < month - 1; i++)
			sum = sum + eachmonth1[i];
		sum = sum + day;
	}
	else 
	{
		for (int i=0;i<month-1;i++)
			sum = sum + eachmonth0[i];
		sum = sum + day;
	}
	printf("%d年%d月%d日是%d年的第%d天\n", year, month, day,year, sum);
	return 0;

}
int judge(int year)//判断是否闰年
{
	if (year % 400 == 0)
		return(1);
	else if (year % 4 == 0)
	{
		if (year % 100 != 0)
			return(1);
	}
	else return (0);
}