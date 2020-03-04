#include<stdio.h>
void main()
{
	int num,temp,rem,rev;
	printf("Enter a number to give the first and last digits in number. \nNumber is:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(temp=rev)
	printf("\nGiven number is pallindorme");
	else
	printf("\nGiven number is not pallindorme");
}
	
