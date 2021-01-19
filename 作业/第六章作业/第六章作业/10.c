//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	int daxie, xiaoxie, shuzi, space, other, i, j;
//	daxie = xiaoxie = shuzi = space = other = 0;
//	char a[3][80] = { '\0' };
//	printf("请分别输入三段文字（每段文字输入后按一次回车）：\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; (a[i][j] = getchar()) != '\n'; j++)
//		{
//			if (a[i][j] >= 'a'&&a[i][j] <= 'z')
//				xiaoxie++;
//			else if (a[i][j] >= 'A'&&a[i][j] <= 'Z')
//				daxie++;
//			else if (a[i][j] >= '0'&&a[i][j] <= '9')
//				shuzi++;
//			else if (a[i][j] == ' ')
//				space++;
//			else
//				other++;
//		}
//	}
//	printf("这三行文字中共有:\n小写字母：\t%d\n大写字母:\t%d\n数字：\t\t%d\n空格：\t\t%d\n其他字符：\t%d\n", xiaoxie, daxie, shuzi, space, other);
//}