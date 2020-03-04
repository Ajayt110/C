#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character to check if it is Upper or lower case\n");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z') 
	printf("Character is Uppercase\n");
	else if(ch>='a' && ch<='z')
	printf("Character is a Lowercase\n");
	else 
	printf("Character is Not Alphabet\n");

}
