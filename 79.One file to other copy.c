#include<stdio.h>
void main()
{
	FILE *ptr1,*ptr2;
	char ch;
	ptr1=fopen("D://New_As_2.txt","r");
	ptr2=fopen("D://New_As_1.txt","w");
	while((ch=fgetc(ptr1))!=EOF)
	{
		fprintf(ptr2,"%c",ch);
		printf("%c",ch);
	}
	fclose(ptr1);
	fclose(ptr2);
}
