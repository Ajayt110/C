#include<stdio.h>
void main()
{
	FILE *ptr1,*ptr2,*fptr;
	char ch1,ch2,ch3;
	ptr1=fopen("D://New_As_2.txt","r");
	ptr2=fopen("D://abc.txt","r");
	fptr=fopen("D://New_As_1.txt","w");	
	while((ch1=fgetc(ptr1))!=EOF)
	fprintf(fptr,"%c",ch1);
	while((ch2=fgetc(ptr2))!=EOF)
	fprintf(fptr,"%c",ch2);
	while((ch3=fgetc(fptr))!=EOF)
	printf("%c",ch3);	
	fclose(ptr1);
	fclose(ptr2);
	fclose(fptr);

}
