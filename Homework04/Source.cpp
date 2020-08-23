#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b = 2;
	printf("Enter number : ");
	scanf("%d", &a);
	printf("Factoring Result : ");
	while (a != 1)
	{
		if (a % b == 0)
		{
			printf("%d", b);
			a = a / b;
			if (a != 1)
			{
				printf(" x ");
			}
		}
		else b++;
	}
	return 0;
}