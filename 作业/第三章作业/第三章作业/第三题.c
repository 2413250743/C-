#include<stdio.h>
#include<math.h>
int main()
{
	float d = 300000, p = 6000, r = 0.01;
	float m;
	m = log10(p / (p - d*r)) / log10(1 + r);
	printf("第三题：还清月数为%5.1f\n", m);
	return 0;
}