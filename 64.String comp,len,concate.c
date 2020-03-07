#include<string.h>
#include<stdio.h>
void main()
{
	char a[10],b[10];
	int i=0,j=0,alen=0,blen=0,equal;
	printf("Enter 2 strings:");
	//scanf("%s %s",a,b);
	gets(a);
	gets(b);
	//printf("%s %s ",a,b);
	for(i=0;a[i]!='\0';i++)
	alen++;
	for(i=0;b[i]!='\0';i++)
	blen++; 
	if(alen!=blen)
	{
		printf("Entered strings are not equal");
	}
	else
	{
	if(alen>blen)
	{
	for(i=0;i<alen;i++)
	{
	if(a[i]==b[i])
	equal=0;
	else
	{
	equal=1;
	break;}
	}
	}
	else
	{
	for(i=0;i<blen;i++)
	{
	if(a[i]==b[i])
	equal=0;
	else
	{
	equal=1;
	break;
	}
	}
	}
	if(equal==0)
	printf("\n\nEntered strings are equal.");
	else
	printf("\n\nEntered strings are not equal.");
}	
	for(i=0;i<blen;i++)
	a[i+alen]=b[i];
	//a[i+alen]='\0';
	printf("\n\nConcatenated String is: %s",a);
}
