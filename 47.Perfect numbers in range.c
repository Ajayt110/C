#include<stdio.h>
void main()
{
		int i,j,num,sum=0;
	printf("Enter a number to print perfect numbes in range. \nNumber is:");
	scanf("%d",&num);
	printf("\nPerfect Numbers under %d are:",num);
	
	for(j=1;j<=num;j++)
	{
	for(i=1;i<=j/2;i++)
	{
		if(j%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==j)
	printf("%d ",j);
	sum=0;
	}
}
