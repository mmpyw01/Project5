#include<stdio.h>
int main()
{
	int base, exponent, pow = 1;
	printf("Enter Base Value : ");
	scanf("%d", &base);
	printf("Enter Exponent Value : ");
	scanf("%d", &exponent);
	printf("Result is = ");
	for (int i = 1; i <= exponent; i++)
	{
		pow = pow * base;

	}
	printf("%d", pow);

}