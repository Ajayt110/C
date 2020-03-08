#include<string.h>
#include<stdio.h>
void main()
{
	int i,count=0;
	char a[20],ch;
	printf("Enter a string:");
	gets(a);
	//printf("\nEntered string is : %s",a);
	printf("\nEnter a character to search its occurance:");
	scanf("%c",&ch);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==ch)
		count++;
	}	
	if(count==0)
	printf("\nEntered string has no occurance of character.");
	else
	printf("\nEntered character %c has %d occurances.",ch,count);
}
