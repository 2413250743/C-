#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m;
	int strcmp(char*p1, char*p2);
	char a[50] = { "BOY" }, b[50] = { "BOD" };
	printf("input string a:\n");
	gets(a);
	printf("input string b:\n");
	gets(b);
	char*p1 = a, *p2 = b;
	m=strcmp(p1, p2);
	printf("the result of comparation is :  %d\n", m);
	return 0;
}
int strcmp(char*p1, char*p2)
{
	while (*p1 != '\0'&&*p2 != '\0')
	{
		if (*p1 == *p2)
		{
			p1++, p2++;
			continue;
		}else
		if (*p1 > *p2)
		{
			return(*p1 - *p2);
			break;
		}
		else if (*p1<*p2)
		{ return (*p1 - *p2); break; }
		
	}
	if (*p1 == '\0' || *p2 == '\0')
		return 0;
	
}