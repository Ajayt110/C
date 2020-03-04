#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number to find the weekday\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
	printf("Day is Monday");
		break;
	case 2:
	printf("Day is Tuesday");
		break;
	case 3:
	printf("Day is Wednesday");
		break;
	case 4:
	printf("Day is Thursday");
		break;
	case 5:
	printf("Day is Friday");
		break;
	case 6:
	printf("Day is Saturday");
		break;
	case 7:
	printf("Day is Sunday");
		break;
	default:
	printf("Only 7 days in a week try between 1-7");
	}
}
