void strong_nums(int start, int end)
{
	int i,j,sum=0,temp,rem,prod=1;
	printf("\n\nStrong numbers in range of %d & %d are :\n",start,end);
	for(i=start;i<=end;i++)
	{
		temp=i;
		while(temp>0)
	{
		rem=temp%10;
		for(j=1;j<=rem;j++)
		{
			prod=prod*j;
		}
		sum=sum+prod;
		temp=temp/10;
		prod=1;
	}
		if(sum==i)
		printf("%d ",i);
		sum=0;
	}
}

void main()
{
	int start,end;
	printf("Enter start and to calculate the strong numbers:\n");
	scanf("%d %d",&start,&end);
	strong_nums(start,end);
}
