#include<stdio.h>
#include<math.h>
void armstrong_nums(int start,int end)
{
	int i,j,count=0,rem,sum,len,num,temp,temp2;
	printf("\n\nArmstrong numbers in range of %d & %d are :\n",start,end);
	for(i=start;i<=end;i++)
	{
		sum=0;
		len=0;
		temp=i;
		while(temp>0)
	{
		len++;
		temp=temp/10;
	}
		temp2=i;
	while(temp2>0)
	{
		rem=temp2%10;
		sum=sum+pow(rem,len);
		temp2=temp2/10;
	}
	if(sum==i)
	printf("%d ",i);
	}
}
void main()
{
	int start,end;
	printf("Enter start and to calculate the armstrongs numbers:\n");
	scanf("%d %d",&start,&end);
	armstrong_nums(start,end);
}
