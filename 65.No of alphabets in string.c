#include<string.h>
#include<stdio.h>
void main()
{
	char a[100];
	int count=0,i,alen=0;
	printf("Enter a string: \n");
	//scanf("%s %s",a,b);
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	if((a[i]>='a'&&a[i]<='z') || (a[i]>='A'&& a[i]<='Z'))
	count++;	
	}
	printf("\nNo of Alphabets in entered string is: %d",count);
}
