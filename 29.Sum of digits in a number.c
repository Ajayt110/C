#include<stdio.h>
void main()
{
	int num,rem,sum=0;
	printf("Enter a number to give the sum of the digits in number. \nNumber is:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("\nGiven number's  sum of the digits is: %d",sum);
}
