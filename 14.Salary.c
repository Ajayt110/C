#include<stdio.h>
    /*Basic Salary <= 10000 : HRA = 20%, DA = 80%
    Basic Salary <= 20000 : HRA = 25%, DA = 90%
    Basic Salary > 20000 : HRA = 30%, DA = 95%*/
void main()
{
	int basic;
	printf("Enter basic salary :");
	scanf("%d",&basic);
	float HRA,DA;
	if(basic<=10000)
	{
		HRA=basic*.20;
		DA=basic*.80;
	}
	else if(basic<=20000)
	{
		HRA=basic*.25;
		DA=basic*.90;
	}
	else
	{
		HRA=basic*.30;
		DA=basic*.95;
	}
	printf("Gross Salary: %.2f",basic+HRA+DA);
}

