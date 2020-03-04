#include<stdio.h>
void main()
{
	int num,count;
	printf("Enter a number to count the number of digits in number. \nValue of n is:");
	scanf("%d",&num);
	while(num>0)
	{
		num=num/10;
		count++;
	}
	printf("No of digits in number is:%d",count);
}
