#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character to check if it is Alphabet\n");
	scanf("%c",&ch);
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	printf("Character is Alphabet\n");
	else 
	printf("Character is NOT Alphabet\n");

}
