#include<stdio.h>
#include<math.h>
void main()
{
int i,rem=0,fac=1,temp,temp2,sum=0,num;
printf("Enter a number to check if Strong number or not. \nNumber is:");
scanf("%d",&num);
temp=num;
temp2=num;
while(num>0)
{
	rem=num%10;
	for(i=rem;i>=1;i--)
	{
		fac=fac*i;	
	}
	sum=sum+fac;
	num=num/10;
	fac=1;
}
if(sum==temp2)
	printf("%d is a strong number.",temp2);
else
	printf("%d is a not strong number.",temp2);
}
