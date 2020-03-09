#include<stdio.h>
int numberOfDays (int month, int year) 
{ 
    if (month == 0) 
        return (31); 
    if (month == 1) 
    { 
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
        return (29); 
    else
    	return (28); 
    } 
    if (month == 2) 
        return (31); 
    if (month == 3) 
        return (30); 
    if (month == 4) 
        return (31); 
    if (month == 5) 
        return (30); 
    if (month == 6) 
        return (31); 
    if (month == 7) 
        return (31); 
    if (month == 8) 
        return (30); 
    if (month == 9) 
        return (31); 
    if (month == 10) 
        return (30); 
    if (month == 11) 
        return (31); 
}
void calendar_print(int month,int year) 
{ 
    char months[13][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September","October", "November", "December"};
    printf ("	 %s OF YEAR %d\n",months[month-1], year); 
    int days,j,k; 
    int day_shift = day_calculation (1, month, year); 
        days = numberOfDays (month-1, year); 
        printf("\n              %s\n\n",months[month-1]); 
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");  
        for (k = 0; k < day_shift; k++) 
            printf("     "); 
        for (j = 1; j <= days; j++) 
        { 
            printf("%5d", j); 
            if (++k > 6) 
            { 
            k = 0; 
            printf("\n"); 
            } 
        } 
        if (k) 
        printf("\n"); 
        day_shift = k; 
    return; 
} 
int day_calculation(int date, int month, int year)
{
	int day_num_arr[13]={31,28,31,30,31,30,31,31,30,31,30,31},i,count=0,tday,flag=0,sum=0;
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
	return((tday+((year-1)*365)+count)%7);
}
void main()
{
	int year,month;
	printf("Enter year: \n");
	scanf("%D",&year);
	printf("Enter month (January as 1 till December as 12): \n");
	scanf("%D",&month);
	calendar_print(month,year);
}
