#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define Change 80
#define O 300
int main()
{
	int fun(int *p0, int *p1);
	int day[4];
	printf("  �������ڣ�2021.2.12��2022.2.1��2023.1.22��2024.2.10\n");
	day[0] = 17, day[1] = 28, day[2] = 38, day[3] = 20;//�����õ�������������
	printf("\t2021�������Ϊ17��\n\t2022�������Ϊ28��\n\t2023�������Ϊ38��\n\t2024�������Ϊ20.\n");//��ʾ��
	int *p0 = day;
	int money[4], *p1 = money;
	fun(p0, p1);//���ú���
	printf("  �Ժ��4�������Ļ��ѷֱ�Ϊ:\n\t2021�꣺%dԪ\t2022��:%dԪ\t2023��:%dԪ\t2024��:%dԪ\n", money[0], money[1], money[2], money[3]);
	return 0;

}
int fun(int *p0,int *p1)//ͨ��ָ�뽫���ô�������
{
	int fare(int day);//���ú���
	p1[0] = fare(p0[0]);
	p1[1] = fare(p0[1]);
	p1[2] = fare(p0[2]);
	p1[3] = fare(p0[3]);
}
int fare(int day)//�����������㻨�ѵĺ���
{
	if (day <= 15)
		return(300 + day * 80);
	else if (day < 20)
		return(1500);
	else if(day <= 34)
		return(1500 - (day - 19) * 80);
	else return(300);
	
}