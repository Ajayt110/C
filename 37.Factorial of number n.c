#include<stdio.h>
void main()
{
	long int i,num,prod=1;
	printf("Enter a number to find factorial of number. \nNumber is:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		prod=prod*i;
	}
	printf("Factorial of the given number %d is %d",num,prod);
}
