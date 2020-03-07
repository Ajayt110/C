#include<string.h>
#include<stdio.h>
void main()
{
	int i,a[20];
	char str[20],ch,flag=0;
	printf("Enter an string: ");
	gets(str);
	printf("\nEnter the character to check the occurance: ");
	scanf("%c",&ch);
	for(i=strlen(str)-1;i>=0;i--)
	{
		if(str[i]==ch)
		{
		a[flag]=i;
		flag++;
		}
	}
	
	if(flag==0)
	printf("\nCharacter is not in the entered string");
	else
	{
		printf("\nCharacter is in the index postions: ");
		for(i=flag-1;i>=0;i--)
		printf("%d ",a[i]);
		
	}
}

