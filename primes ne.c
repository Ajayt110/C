#include<stdio.h>
#include<math.h>
void main()
{
	int i,j=0,p,len=2,flag=0,primes[100];
	primes[0]=2;
	primes[1]=3;
	p=5;
	while(p<=100)
	{
		while(primes[j]!=0)
		{
			if(p%primes[j]==0)	
			flag==1;
			else
			j++;
		}
		if(flag==0)
		{
			primes[len]=p;
			len++;	
		}
		flag=0;
		j=0;
	p+=2;
	i=0;
	printf("%d  ",primes[i]);
	i++;		
	}
	/*for(i=0;i<len;i++)
	{
	printf("%d  ",primes[i]);
	}*/
}
