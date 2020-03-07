#include<stdio.h>
void main()
{
	int a[10]={10,-30,25,-45,75,-95,60,-80},i,neg[10],pos[10],pi=0,ni=0;
	for(i=0;i<8;i++)
	{
		if(a[i]>=0)
		{
			pos[pi]=a[i];
			pi++;
	
		}
		else
		{
			neg[ni]=a[i];
			ni++;
		}
	}
	printf("\nnegative array elements\n");
	for(i=0;i<ni;i++)
	printf(" %d ",neg[i]);
}
