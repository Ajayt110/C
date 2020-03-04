#include<stdio.h>
void main()
{
	long int i,num,index,prod=1;
	printf("Enter a number to find power of number. \nNumber is:");
	scanf("%d",&num);
	printf("Enter the index to calculate power:");
	scanf("%d",&index);
	for(i=1;i<=index;i++)
	{
		prod=prod*num;
	}
	printf("%d raised to power %d is %d.",num,index,prod);
}
