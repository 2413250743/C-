#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
long fun(char *p, int n)
{
	int i, k, j = 0,l=1;
	char b[20] = {'\0'}; int c[20];
	long d = 0; int m;
	for (i = 0; i < n; i++)
	{
		if (p[i] != ' ')
		{
			b[j] = p[i];
			j++;
		}//得到只含有整数的字符串
	}
	
	if (b[0] == '-' || b[0] == '+')
	{
		k = strlen(b)-1;//算数据位数
		for (i = 1; i <= k; i++)
		{
			c[i - 1] = b[i] - 48;//得到数字数组
		}
		m = k;
		for (;k>0;k--)
		{
			d = d + c[k - 1] * l;
			l = 10 * l;
		}if (b[0] == '-')
		d = -d;
		else
		return (d);

	}
	else 
	{
		k = strlen(b);
		for (i = 0; i < k; i++)
		{
			c[i] = b[i] - 48;
		}m = k;
		for (; k>0; k--)
		{
			d = d + c[k - 1] * l;
			l = 10 * l;
		}return (d);

	}

}
int main()
{
	long n;
	int m;
	char s[20];
	printf("输入一个数字字符串：\n");
	gets(s);
	m = strlen(s);
	char *p = s;
	n = fun(p,m);
	printf("转换后的数字是：\n%ld\n\n", n);
	return 0;

}
