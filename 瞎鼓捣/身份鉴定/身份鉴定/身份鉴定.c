#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
int main()
{
	int strcmp(const char*s1, const char*s2);
	char *a = "唐葆程", *b = "袁晨航";
	char str[5];
	printf("请输入您的名字: ");
	scanf("%s", str);
	char *shenfen = str;
	printf("恭喜！经检测，您的身份是：");
	if (strcmp(shenfen, a) == 0)
		printf("父亲！\n");
	else if (strcmp(shenfen, b) == 0)
		printf("儿子！\n");
	else printf("孙子！\n");
	return 0;
}
