#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float a = 0.1, b = 0.2, c = 0.2, d = 0.5;
float g1, g2, g3, g4, g5;
int main()
{
	void Sort();
		float Score(int a[]);
	float p1[4] = { 80, 90, 75, 80 },
	    p2[] = { 90, 60, 80, 78 },
		p3[] = { 30, 75, 60, 50 },
		p4[] = { 100, 90, 90, 85 },
		p5[] = { 50, 80, 80, 95 };
	float Score(int a[]);

	g1 = Score(p1);
	g2 = Score(p2);
	g3 = Score(p3);
	g4 = Score(p4);
	g5 = Score(p5);
	printf("五个同学的成绩分别为%5.2f %5.2f %5.2f %5.2f %5.2f\n", g1, g2, g3, g4, g5);
	Sort();
	printf("排序后成绩为%5.2f %5.2f %5.2f %5.2f %5.2f\n", g1, g2, g3, g4, g5);
	return 0;
}
