#include<stdio.h>
void main()
{
	/*For first 50 units Rs. 0.50/unit
    For next 100 units Rs. 0.75/unit
    For next 100 units Rs. 1.20/unit
    For unit above 250 Rs. 1.50/unit
    An additional surcharge of 20% is added to the bill*/
    float units,bill,f_bill;
    printf("Enter the no of units consumed: \n");
    scanf("%f",&units);
    if(units<=50)
    bill=units*0.50;
	if(units<=100)
    bill=(50*0.50)+((units-50)*0.75);
	if(units<=150)
    bill=(50*0.50)+(100*0.75)+((units-150)*1.20);
	if(units>=250)
    bill=(50*0.50)+(100*0.75)+(100*1.20)+((units-250)*1.50);	
    
	f_bill=bill*1.2;
    printf("\nFinal Bill amount in INR is %.2f.",f_bill);
}
