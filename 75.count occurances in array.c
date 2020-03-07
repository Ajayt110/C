#include<string.h>
#include<stdio.h>
void main()
{
	int i,flag=0,count=0;
	char str[20],ch;
	printf("Enter an string: ");
	gets(str);
	printf("\nEnter the character to check the occurance: ");
	scanf("%c",&ch);
	for(i=strlen(str)-1;i>=0;i--)
	{
		if(str[i]==ch)
		{
		count++;
		}
	}
	if(count>0)
	printf("\nCharacter is in %d times in string",count);
	else
	printf("\nCharacter %c is not in the entered string",ch);
}

