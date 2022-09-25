#include<stdio.h>
#include<math.h>

int main (void)

{
	float a;
	float b;
	float c;
	float p;
	float area;

	printf("输入程序的三个边框：");
	scanf_s("%f,%f,%f", &a, &b, &c);
	p = 1 / 2 * (a + b + c);
	area = sqrt(p * (p - a) * (p - b) * (p - c));

	printf("a=%f,b=%f,c=%f,p=%f", a, b, c,p);
	printf("area=%f\n", area);

	return 0;



}