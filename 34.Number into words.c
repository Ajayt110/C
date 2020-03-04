#include<stdio.h>
void main()
{
	long int num,temp,rem,len,i;
	char a[50];
	printf("Enter a number to print the number in words. \nValue of n is:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		if(rem==1)
		a[i]='o';
		else if(rem==2)
		a[i]='t';
		else if(rem==3)
		a[i]='T';
		else if(rem==4)
		a[i]='f';
		else if(rem==5)
		a[i]='F';
		else if(rem==6)
		a[i]='s';
		else if(rem==7)
		a[i]='S';
		else if(rem==8)
		a[i]='e';
		else if(rem==9)
		a[i]='n';
		else if(rem==0)
		a[i]='z';
		
		num=num/10;
		i++;
		len++;
	}	
	for(i=len;i>=0;i--)
	{
		if(a[i]=='o')
			printf("One ");
		else if(a[i]=='t')
			printf("Two ");
		else if(a[i]=='T')
			printf("Three ");
		else if(a[i]=='f')
			printf("Four ");
		else if(a[i]=='F')
			printf("Five ");
		else if(a[i]=='s')
			printf("Six ");
		else if(a[i]=='S')
			printf("Seven ");
		else if(a[i]=='e')
			printf("Eight ");
		else if(a[i]=='n')
			printf("Nine ");
		else if(a[i]=='z')
			printf("Zero ");
	}
}
