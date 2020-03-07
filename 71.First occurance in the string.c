#include<string.h>
#include<stdio.h>
void main()
{
	int i;
	char str[20],ch,flag=0;
	printf("Enter an string: ");
	gets(str);
	printf("\nEnter the character to check the occurance: ");
	scanf("%c",&ch);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==ch)
		{
		printf("\nCharacter is in the index postion %d",i);
		flag=1;
		break;
		}
	}
	if(flag!=1)
	printf("\nCharacter is not in the entered string");
}

