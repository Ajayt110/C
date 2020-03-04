#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number to find the weekday\n");
	scanf("%d",&a);
	if(a==1)
	printf("Day is Monday");
	else if(a==2)
	printf("Day is Tuesday");
	else if(a==3)
	printf("Day is Wednesday");
	else if(a==4)
	printf("Day is Thursday");
	else if(a==5)
	printf("Day is Friday");
	else if(a==6)
	printf("Day is Saturday");
	else if(a==7)
	printf("Day is Sunday");
	else
	printf("Only 7 days in a week try between 1-7");
}
