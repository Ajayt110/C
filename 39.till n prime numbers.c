#include<stdio.h>
void main()
{
	int i,j,num,count=0;
	printf("Enter a number to check prime or not.\nNumber is:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	for(j=2;j<=num/2;j++)
	{
		if(i%j==0)
		count++;
	}
	if(count<=1)
	printf("%d ",i);
	count=0;
	}
	
}
