#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int judge(int year);//�ж��Ƿ�����
	int year, month, day, a; 
	int sum=0;
	int eachmonth0[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int eachmonth1[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	printf("��ֱ����������ղ��ÿո������\n");
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
	printf("%d��%d��%d����%d��ĵ�%d��\n", year, month, day,year, sum);
	return 0;

}
int judge(int year)//�ж��Ƿ�����
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