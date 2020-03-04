#include<stdio.h>
#include<math.h>
void main()
{
int i,rem=0,fac=1,j,temp,temp2,sum=0,num;
printf("Enter a number to print strong numbers in range. \nNumber is:");
scanf("%d",&num);
printf("\nStrong numbers in range of %d are:",num);
for(i=1;i<=num;i++)
{
	temp=i;
	temp2=i;
while(temp>0)
{
	rem=temp%10;
	for(j=rem;j>=1;j--)
	{
		fac=fac*j;	
	}
	sum=sum+fac;
	temp=temp/10;
	fac=1;
}
if(temp2==sum)
printf("%d ",i);
sum=0;
}
}
