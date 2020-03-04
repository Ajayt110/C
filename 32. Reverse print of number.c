#include<stdio.h>
void main()
{
	int num,rem=0,rev=0;
	printf("Enter a number to give reverse of the number. \nNumber is:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("\nGiven number's  Reverse is: %d",rev);
}
