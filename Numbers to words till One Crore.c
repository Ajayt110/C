#include<stdio.h>
void till_tens_place(int num)
{
		if(num==1)
			printf("One ");
		else if(num==2)
			printf("Two ");
		else if(num==3)
			printf("Three ");
		else if(num==4)
			printf("Four ");
		else if(num==5)
			printf("Five ");
		else if(num==6)
			printf("Six ");
		else if(num==7)
			printf("Seven ");
		else if(num==8)
			printf("Eight ");
		else if(num==9)
			printf("Nine ");
		else if(num==10)
			printf("Ten ");
		else if(num==11)
			printf("Eleven ");
		else if(num==12)
			printf("Tweleve ");
		else if(num==13)
			printf("Thirteen ");
		else if(num==14)
			printf("Fourteen ");
		else if(num==15)
			printf("Fifteen ");
		else if(num==16)
			printf("Sixteen ");
		else if(num==17)
			printf("Seventeen ");
		else if(num==18)
			printf("Eighteen ");
		else if(num==19)
			printf("Ninteen ");
		else if(num==20)
			printf("Twenty ");
		else if(num>20)
		{
			if(num>=21 && num<=29)
			{
			printf("Twenty ");
			till_tens_place(num%10);}
			else if(num>=30 && num<=39)
			{
			if(num==30)
			printf("Thirty ");
			else
			{
			printf("Thirty ");
			till_tens_place(num%10);}}
			else if(num>=40 && num<=49)
			{
			if(num==40)
			printf("Fourty ");
			till_tens_place(num%10);}
			else if(num>=50 && num<=59)
			{
			if(num==50)
			printf("Fifty ");
			else
			{
			printf("Fifty ");
			till_tens_place(num%10);}}
			else if(num>=60 && num<=69)
			{
			if(num==60)
			printf("Sixty ");
			else
			{
			printf("Sixty ");
			till_tens_place(num%10);}}
			else if(num>=70 && num<=79)
			{
				if(num==70)
			printf("Seventy ");
			else
			{
			printf("Seventy ");
			till_tens_place(num%10);}}
			else if(num>=80 && num<=89)
			{
				if(num==80)
			printf("Eighty ");
			else	
			{
			printf("Eighty ");
			till_tens_place(num%10);
			}}
			else if(num>=90 && num<=99)
			{
				if(num==90)
				printf("Ninety ");
				else
			{
			printf("Ninety ");
			till_tens_place(num%10);
			}}
			else
			printf("Hundred");
	}
}
void hundreds_place(int num1)
{
	if(num1==1000) 
	{
	till_tens_place(num1/1000);
	printf("Thousand ");
	}
	else if(num1==0)
	{}
	else
	{
	till_tens_place(num1/100);
	printf("Hundred ");
	till_tens_place(num1%100);
	}
}

void main()
{
	int number;
	printf("Enter a number to print in words <=10000: ");
	scanf("%d",&number);
	if(number==0)
	printf("Zero");
	if(number<=100)
	till_tens_place(number);
	else if(number > 100 && number<=1000)
	hundreds_place(number);
	else if(number > 1000 && number<=100000)
	{
	if(number==100000)
	printf("One Lakh");
	till_tens_place(number/1000);
	printf("Thousand ");
	hundreds_place(number%1000);
	}
	else if(number > 100000 && number<=10000000)
	{
	if(number==10000000)
	printf("One crore");
	till_tens_place(number/100000);
	printf("Lakh ");
	till_tens_place((number%100000)/1000);
	printf("Thousand ");
	hundreds_place(number%1000);
	}

}
