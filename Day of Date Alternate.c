#include<stdio.h>
void day_of_year(int date, int month, int year)
{
	if((date>=1 && date<=31) && (month>=1 && month<=12) && (year>0) )
	{
	if(month==2 && date>29)
	printf("Entered date is INVALID.");
	else
	{	
	int day,day_num_arr[13]={31,28,31,30,31,30,31,31,30,31,30,31},i,count=0,tday,flag=0,sum=0;
	char day_array[8][10]={"Sunday","Monday","Tuesday","Wedneday","Thursday","Friday","Saturday"};	
	for(i=0;i<month-1;i++)
		{
		sum=sum+day_num_arr[i];
		}
		tday=sum;
		tday=sum+date;
		if((year%400) ||(year%4==0 && year%100!=0))
		flag=1;
		if(flag==1&& month>2)
		{
		tday=tday+1;
		}
	for(i=1;i<year;i++)
	{
		if((i%400==0)||(i%4==0&&i%100!=0))
		count++;
	}
	day=(tday+((year-1)*365)+count)%7;
	printf("\nThe day of the date is: %s \n",day_array[day]);
	}
}
else
	printf("Entered date is INVALID.");
}
void main()
{
	int date,month,year;
	printf("Enter date: \n");
	scanf("%D",&date);
	printf("Enter month: \n");
	scanf("%D",&month);
	printf("Enter year: \n");
	scanf("%D",&year);
	day_of_year(date,month,year);
		
}
