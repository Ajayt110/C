void prime_nums(int start, int end)
{
	int i,j,count=0;
	printf("\n\nPrime numbers in range of %d & %d are :\n",start,end);
	for(i=start;i<=end;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count<1)
		printf("%d ",i);
		count=0;
	}
}

void main()
{
	int start,end;
	printf("Enter start and to calculate the prime numbers:\n");
	scanf("%d %d",&start,&end);
	prime_nums(start,end);
}
