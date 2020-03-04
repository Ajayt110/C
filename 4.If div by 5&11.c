#include<stdio.h>
void main()
{
int a;
	printf("Enter a number to check if it is divisible by 5 & 11\n");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	printf("Entered number is divisible by 5 & 11\n");
	else if(a%5==0)
	printf("Entered number is only divisible by 5\n");
	else if(a%11==0)
	printf("Entered number is only divisible by 11\n");
	else
	printf("Entered number is not divisible by 5 or 11\n");
}

