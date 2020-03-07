#include<string.h>
#include<stdio.h>
void main()
{
	char a[100];
	int count=0,i,len;
	printf("Enter a string: \n");
	gets(a);
	len=strlen(a);
	printf("\n\n\tReverse of string is: ");
	for(i=len-1;i>=0;i--)
	printf("%c",a[i]);	
}
