#define _crt_secure_no_warnings
#include<stdio.h>;
#include <string.h>
int main()
{
	float r, h, p = 3.1415926;
	float l, s1, s2, v1, v2;//s1Բ, s2��, v1��, v2Բ��
	printf("��ֱ�����Բ�뾶r���ո�Բ���߶�h�������س���ʼ����\n");
	scanf("%f%f", &r, &h);
	l = 2 * p*r, s1 = p*p*r, s2 = 4 * p*r*r, v1 = (4 * p*r*r*r) / 3, v2 = s1*h;
	printf("Բ�ܳ�Ϊ%6.2f��\nԲ���Ϊ%6.2f��\n������Ϊ%6.2f��\n�����Ϊ%6.2f��\nԲ�����Ϊ%6.2f\n", l, s1, s2, v1, v2);
	return 0;

}