void main()
{
	int i,j,count=0,ind,max=0;
	char str[20];
	printf("Enter an string: ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		for(j=i+1;j<strlen(str);j++)
		{
			if(str[i]==str[j])
			{
				count++;
				str[i]='\0';
			}
		}
		if(max<count)
		{
			max=count;
			ind=i;
		}
			count=0;
	}
	if(max==0)
	printf("\nAll characters are of equal frequency.");
	else
	printf("%c",str[ind]);
	
}
