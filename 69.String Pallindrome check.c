#include<string.h>
#include<stdio.h>
void main()
{
	int i,j=0;
	char a[20];
	gets(a);
	printf("Entered string is : %s",a);
	for(i=0;i<strlen(a)/2;i++)
	{
		if(a[i]==a[(strlen(a)-i-1)])
		j++;
	}	
	if(j==strlen(a)/2)
	printf("\nEntered string is a pallindrome.");
	else
	printf("\nEntered string is not pallindrome.");
}
