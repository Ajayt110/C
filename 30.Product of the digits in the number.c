#include<stdio.h>
void main()
{
	int num,rem,product=1;
	printf("Enter a number to give the product of digits in number. \nNumber is:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		product=product*rem;
		num=num/10;
	}
	printf("\nGiven number's  sum of the digits is: %d",product);
}
