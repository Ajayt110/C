#include<string.h>
#include<stdio.h>
void main()
{
	char a[100];
	int count=0,i;
	printf("Enter a string: \n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]==' ')
	count++;
	}
	printf("\nNo of words in entered string is: %d",count+1);
}
