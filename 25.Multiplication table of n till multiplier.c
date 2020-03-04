#include<stdio.h>
void main()
{
	int n,mul,i=1;
	printf("Enter n & end multiplier to print multiplication table of till multiple");
	printf("\nValue of n is:");
	scanf("%d",&n);
	printf("\nValue of end multiplier is:");
	scanf("%d",&mul);
	printf("\n");
	while(i<=mul)
	{
		printf("%d x %d = %d\n",n,i,n*i);
		i++;
	}	
}
