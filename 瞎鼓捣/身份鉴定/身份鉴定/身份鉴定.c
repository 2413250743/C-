#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
int main()
{
	int strcmp(const char*s1, const char*s2);
	char *a = "�����", *b = "Ԭ����";
	char str[5];
	printf("��������������: ");
	scanf("%s", str);
	char *shenfen = str;
	printf("��ϲ������⣬��������ǣ�");
	if (strcmp(shenfen, a) == 0)
		printf("���ף�\n");
	else if (strcmp(shenfen, b) == 0)
		printf("���ӣ�\n");
	else printf("���ӣ�\n");
	return 0;
}
