#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define N 10
int main()
{
	int i;
	char name[20];
	struct candidate
	{
		char name[20]; int count;
	} person[3] = { { "Zhang", 0 }, { "Wang", 0 }, { "Sun", 0 } };
	printf("enter name:\n");
	for (i = 0; i < N; i++)
	{
		gets(name);
		if ((strcmp(name, person[0].name) == 0))
			person[0].count++;
		else if ((strcmp(name, person[1].name) == 0))
			person[1].count++;
		else if (strcmp(name, person[2].name) == 0)
			person[2].count++;
	}
	printf("result:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%7s: %d\n",person[i].name,person[i].count);
	}
	return 0;
}