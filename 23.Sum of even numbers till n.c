void main()
{
	int n,sum=0,i;
	printf("Enter n to print sum of even natural numbers till n.\nValue of n is :");
	scanf("%d",&n);
	printf("\n");

	while(i<=n)
	{
	if(i%2==0)
	sum=sum+i;
	i++;
	}
	printf("The sum of  even natural numbers tinn %d is %d.",n,sum);
}
