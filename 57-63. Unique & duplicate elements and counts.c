#include<stdio.h>
void main()
{
int i,j,k=0,count=1,il,len,nc=0,dupli=0,x=0;
printf("enter length of array\n");
scanf("%d",&len);
int a[len],b[len],c[len];
printf("enter %d elenments\n",len);
for(i=0;i<len;i++)
{
scanf("%d",&a[i]);
b[i]=a[i];
}
for(i=0;i<len;i++)
{
	for(j=i+1;j<len;j++)
	{
		if(a[i]==a[j])
		{
			if(a[i]!=0)
			{
			a[j]=0;
			count++;
			x=x+count;
		}
		}
	}
if(a[i]!=0)
	{
		nc++;
		if(count==1)
		{
			c[k]=i;
			k++;	
		}
		printf("Element in array is %d & its frequency is %d.\n",a[i],count);
	}
	count=1;
	if(a[i]==0)
	dupli++;
	}
printf("\n\nUnique elements in the array are: ");
for(i=0;i<len;i++)
{
	il=c[i];
	if(i<k)
	printf("%d ",b[il]);
}

printf("\n\nNo of unique elements is %d.",len-x);
printf("\n\nNo of duplicate elements is %d",dupli);
}
