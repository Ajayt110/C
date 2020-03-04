#include<stdio.h>
void main()
{
	int a=0,b=1,num,x;
	printf("Enter n for fibonacci range:\n");
	scanf("%d",&num);
	printf("Fibonacci series till %d are:\n 0 1 ",num);
	while(x<num/1.5)
	{
	x=a+b;
	printf("%d ",x);
	a=b;
	b=x;
	}
}
