#include<stdio.h>
void main()
{
	long int i,num,index;
	printf("Enter a number to find factors of number. \nNumber is:");
	scanf("%d",&num);
	printf("\nFactors of number are: ");
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		printf("%d ",i);
	}
	printf("%d",num);
}
