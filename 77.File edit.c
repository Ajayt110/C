#include<stdio.h>
void main()
{
	FILE *ptr;
	char a[20];
	ptr=fopen("D://New_As_2.txt","w");
	printf("Enter string to print nto the file");
	fprintf(ptr,"Hi this is new message.");
	fclose(ptr);	
}	
