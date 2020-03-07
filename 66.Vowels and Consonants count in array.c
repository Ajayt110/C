#include<string.h>
#include<stdio.h>
void main()
{
	char a[100];
	int count=0,i,alen=0,vcount=0,ccount=0;
	printf("Enter a string: \n");
	//scanf("%s %s",a,b);
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	if((a[i]>='a'&&a[i]<='z') || (a[i]>='A'&& a[i]<='Z'))
	{
	count++;
	if(a[i]=='a' || a[i]== 'A' || a[i]=='e'|| a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
	vcount++;
	else
	ccount++;
	}
	}
	printf("\nNo of Alphabets in entered string is: %d",count);
	printf("\nNo of Vowels in entered string is: %d",vcount);
	printf("\nNo of Consonants in entered string is: %d",ccount);
	
}
