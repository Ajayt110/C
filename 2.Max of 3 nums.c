#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter 3 values:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	printf("%d is greater",a);
	else if(b>c && b>a)
		printf("%d is greater",b);
	else if(c>a && c>b)
	printf("\n%d is greater",c);
	else
	printf("\nAll are equal to %d",a);

	
}
