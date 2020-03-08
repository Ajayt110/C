#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,count=0,ind[20],len,max[20],tempm=1,max_index,max_count,mi=0;
	char str[20];
	printf("Enter an string: ");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		count++;
		for(j=i+1;j<len;j++)
		{
			if(str[j]==str[i])
			{
				count++;
				str[j]='\0';
			}
		}
		if(str[i]!='\0')
		{
		max[mi]=count;
		ind[mi]=i;
		mi++;
		}
		count=0;
	}
	printf("\n");

	/*for(i=0;i<mi;i++)
	{
		printf("%d ",max[i]);
	}
	printf("\n");
	for(i=0;i<mi;i++)
	{
		printf("%d ",ind[i]);
	}*/
	for(i=0;i<mi;i++)
	{
		if(tempm>max[i])
		{
		tempm=max[i];
		}
	}


	printf("\nMinimum frequency character in the array is/are:\t");
		for(i=0;i<mi;i++)
	{
		if(tempm==max[i])
		{
		max_index=ind[i];
		printf("%c ",str[max_index]);
		}
	}



}
