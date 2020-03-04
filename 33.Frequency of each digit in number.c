#include<stdio.h>
void main()
{
	int num,temp1,temp2,rem,c_rem,count=0;
	printf("Enter a number to give the first and last digits in number. \nNumber is:");
	scanf("%d",&num);
	temp1=num;
	temp2=num;
	while(num>0)
	{
		rem=num%10;
		while(temp1>0)
		{
			c_rem=temp1%10;
			if(rem==c_rem)
			count++;
			temp1=temp1/10;	
		}
	printf("\nFrequency of %d in %d in %d",rem,temp2,count);
	count=0;
	temp1=temp2;
	num=num/10;
	}
}
