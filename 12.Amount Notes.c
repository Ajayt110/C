#include<stdio.h>
int amount,notes,f_notes=0,n_2000=0,n_200=0,n_500=0,n_100=0;
void notes_calculation()
{	
	int notes;
	if(amount>=2000)
	{
	notes=amount/2000;
	n_2000=notes;
	amount=amount-(notes*2000);
	f_notes=f_notes+notes;
	notes_calculation();
	}	
	else if(amount>=500)
	{
	notes=amount/500;
	n_500=notes;
	amount=amount-(notes*500);
	f_notes=f_notes+notes;
	notes_calculation();
	}
	else if(amount>=200)
	{
	notes=amount/200;
	n_200=notes;
	amount=amount-(notes*200);
	f_notes=f_notes+notes;
	notes_calculation();
	}
	else if(amount>=100)
	{
	notes=amount/100;
	n_100=notes;
	amount=amount-(notes*100);
	f_notes=f_notes+notes;
	notes_calculation();
	}
	else
	{
	printf("Total no of Notes =%d.\n",f_notes);
	printf("No of 2000 Notes =%d.\nNo of 500 Notes =%d.\nNo of 200 Notes =%d.\nNo of 100 Notes =%d.",n_2000,n_500,n_200,n_100);
	}
			
}

void main()
{
    
    printf("Enter the total amount: \n");
    scanf("%d",&amount);
    if(amount%100==0)
   	notes_calculation();
   	else
   	printf("Invalid amount. Plese enter multiples of 100\n");
}
