#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number to check +ve or -ve\n");
	scanf("%d",&a);
	if(a>0)
	printf("Number is positive");
	else if(a<0)
	printf("Number is Negative");
	else
	printf("Number equals to zero(0)");
}
