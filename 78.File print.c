#include<stdio.h>
void main()
{
	FILE *ptr;
	char a[20],ch;
	ptr=fopen("D://New_As_2.txt","r");
	printf("Contents in the file are:\n");
	while((ch=fgetc(ptr))!=EOF)
	{
	printf("%c",ch);
	}
	//fprintf(ptr,"Hi this is new message.");
	fclose(ptr);	
}	
