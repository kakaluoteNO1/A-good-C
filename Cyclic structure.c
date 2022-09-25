//#include <stdio.h>
//int main(void)
////{
//	int i = 0;
//	int sum = 0;
//loop:(i <= 100);
//{
//	sum = sum + i;
//	i++;
//	goto loop;
//}
//printf("%d\n", sum);
//#include<stdio.h>
//int main(void)
//
//{	int i = 0;
//    int sum = 0;
//while (i <= 100)
//{
//	sum = sum + i;
//		i++;
//
//}
//    printf("%d", sum);
//    return 0;
//}

#include<stdio.h>
int main(void)
{
	/*int i = 0;
	int sum = 0;
	do {
		sum = sum + i;
		i++;
	} while (i <= 100);
	printf("%d", sum);*/
	
	int sum = 0;
	
	for (int i = 0; i <= 100; i++)
	{	sum = sum + i;
     }

	printf("%d", sum);

	return  0;
}