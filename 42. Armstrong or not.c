#include<stdio.h>
#include<math.h>
void main()
{
int i=1,rem=0,sum=0,count=0,temp,temp2,num;
printf("Enter a number to check if Armstrong or not. \nNumber is:");
scanf("%d",&num);
temp=num;
temp2=num;
while(temp>0)
{
temp=temp/10;
count++;
}
while(num>0)
{
	rem=num%10;
	sum=sum+pow(rem,count);
	num=num/10;
}
if(sum==temp2)
	printf("%d is a armstrong number.",temp2);
else
	printf("%d is a not armstrong number.",temp2);
}
