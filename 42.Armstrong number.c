#include<math.h>
#include<stdio.h>
void list_of_armstrongnumbers(int start,int end)
{
	 int num,digits=0,sum=0;
	while(start<=end) 
    {
	    num=start;
	      while(num!=0)
	      {
	      	num=num/10;
	      	digits++;
		  }
		  num=start;
		  while(num!=0)
		  {
		  	sum+=pow(num%10,digits);
		  	num=num/10;
		  }
		  if(sum==start)
		  {
		  	printf("%d\t",start);
		  }
		  digits=0;
		  sum=0;
	  
		
		start++;
	}
}
void main()
{
	int end;
	printf("Enter a number to check if Armstrong numbers in range. \nNumber is:");
scanf("%d",&end);
    list_of_armstrongnumbers(2,end);
}

