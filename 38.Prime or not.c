#include<stdio.h>
void main()
{
	long int i,num,count=0;
	printf("Enter a number to check prime or not.\nNumber is:");
	scanf("%d",&num);
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count>1)
	printf("Number is composite number");
	else
	printf("Number is prime number");
}
