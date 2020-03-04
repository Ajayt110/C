#include<stdio.h>
void main()
{
	int num,count,fd,ld,temp;
	printf("Enter a number to give the first and last digits in number. \nNumber is:");
	scanf("%d",&num);
	ld=num%10;
	temp=num;
	while(temp>0)
	{
		temp=temp/10;
		count++;
	}
	while(count>1)
	{
		num=num/10;
		count--;
	}
	fd=num;
	printf("\tFirst digits in number is:%d",fd);
	printf("\n\tLast digits in number is:%d",ld);
}
