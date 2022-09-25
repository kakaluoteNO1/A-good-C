#include<stdio.h>
int main(void)
{
	int a = 1;
	int b = 2;
	printf("a+b=%d\n", a + b);

	int c = a - b;
	printf("c=%d\n", c);

	c = a * b;
	printf("c=%d\n", c);

	c = a / b;
	printf("c=%d\n", c);

	return 0;
}