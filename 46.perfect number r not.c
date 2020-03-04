#include<stdio.h>
void main()
{
		int i,num,sum=0;
	printf("Enter a number to check if it's perfect or not. \nNumber is:");
	scanf("%d",&num);
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	printf("%d is a perfect number",num);
	else
	printf("%d is not a perfect number",num);
}
