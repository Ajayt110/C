#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character to check if it is Alphabet or Digit or Special Character\n");
	scanf("%c",&ch);
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	printf("Character is Alphabet\n");
	else if(ch>='1' && ch<='9'||ch=='0')
	printf("Character is a Digit\n");
	else 
	printf("Character is Special Character\n");

}
