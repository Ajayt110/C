#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character to check if it is Vowel or Consonant\n");
	scanf("%c",&ch);
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'||ch=='a'||ch=='a')
		printf("Character is a Vowel\n");
		else	
		printf("Character is a Consonant\n");
	}
	else 
	printf("Character is NOT Alphabet\n");

}
