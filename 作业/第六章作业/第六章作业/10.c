//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	int daxie, xiaoxie, shuzi, space, other, i, j;
//	daxie = xiaoxie = shuzi = space = other = 0;
//	char a[3][80] = { '\0' };
//	printf("��ֱ������������֣�ÿ�����������һ�λس�����\n");
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
//	printf("�����������й���:\nСд��ĸ��\t%d\n��д��ĸ:\t%d\n���֣�\t\t%d\n�ո�\t\t%d\n�����ַ���\t%d\n", xiaoxie, daxie, shuzi, space, other);
//}