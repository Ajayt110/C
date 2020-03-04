#include<stdio.h>
    /*Percentage >= 90% : Grade A
    Percentage >= 80% : Grade B
    Percentage >= 70% : Grade C
    Percentage >= 60% : Grade D
    Percentage >= 40% : Grade E
    Percentage < 40% : Grade F*/
void main()
{
	int Phy,Chem,Bio,Math,Comp;
	float percent;
	printf("Enter marks in Physics : ");
	scanf("%d",&Phy);
	printf("Enter marks in Chemisty : ");
	scanf("%d",&Chem);
	printf("Enter marks in Biology : ");
	scanf("%d",&Bio);
	printf("Enter marks in Maths : ");
	scanf("%d",&Math);
	printf("Enter marks in Computer : ");
	scanf("%d",&Comp);
	percent=(Phy+Chem+Bio+Comp+Math);
	printf("Percentage of total marks is : %.2f\n",percent/5);
	if(percent>=90)
	printf("Grade is A");
	else if(percent>=80)
	printf("Grade is B");
	else if(percent>=70)
	printf("Grade is C");
	else if(percent>=60)
	printf("Grade is D");
	else if(percent>=40)
	printf("Grade is E");
	else
	printf("Grade is F");
}

