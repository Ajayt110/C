void perfect_nums(int start, int end)
{
	int i,j,count=0,sum=0;
	printf("\n\nPerfect numbers in range of %d & %d are :\n",start,end);
	for(i=start;i<=end;i++)
	{
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			sum=sum+j;
		}
		if(sum==i)
		printf("%d ",i);
		count=0;
		sum=0;
	}
}

void main()
{
	int start,end;
	printf("Enter start and to calculate the perfect numbers:\n");
	scanf("%d %d",&start,&end);
	perfect_nums(start,end);
}
