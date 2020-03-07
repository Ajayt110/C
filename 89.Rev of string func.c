#include<string.h>
#include<stdio.h>
void rev_string(char rev[100])
{
	int i;
	printf("\n\nReverse of entered string is :\n");
	for(i=strlen(rev)-1;i>=0;i--)
	{
		printf("%c",rev[i]);
	}
}
void main()
{
	char a[100];
	int count=0,i;
	printf("Enter a string: \n");
	gets(a);
	rev_string(a);
}
