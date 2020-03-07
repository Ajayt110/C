#include<stdio.h>
#include<math.h>
void prime_condition(int num)
{
	int i,count=0;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count<1)
	printf("\n%d is Prime number",num);	
	else
	printf("\n%d is Not Prime number",num);	

}
void armstrong_condition(int num)
{
	int temp=num,len=0,rem,sum=0;
	while(temp>0)
	{
		len++;
		temp=temp/10;
	}
	temp=num;
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+pow(rem,len);
		temp=temp/10;	
	}
	if(num==sum)
	printf("\n%d is a Armstrong number",num);	
	else
	printf("\n%d is a not Armstrong number",num);			
}
void strong_condition(int num)
{
	int temp=num,len=0,rem,sum=0,prod=1,i;
	while(temp>0)
	{
		rem=num%10;
		for(i=1;i<=rem;i++)
		{
			prod=prod*i;
		}
		sum=sum+prod;
		prod=1;
		temp=temp/10;
	}
	if(sum==num)
	printf("\n%d is a strong number",num);	
	else
	printf("\n%d is a not strong number",num);		
	
}
void perfect_condition(int num)
{
	int i,count=0,sum=0;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		sum=sum+i;
	}
	
	if(sum==num)
	printf("\n%d is Perfect number",num);	
	else
	printf("\n%d is Not Perfect number",num);
}
void main()
{
	int num;
	printf("Enter number to check the prime or armstrong or perfect numbers:\n");
	scanf("%d",&num);
	prime_condition(num);
	armstrong_condition(num);
	strong_condition(num);
	perfect_condition(num);
}
