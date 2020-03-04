void main()
{
	int n,i=1;
	printf("Enter n to print the natural numbers till the limit.\nValue of n is :");
	scanf("%d",&n);
	printf("\n");
	if(n>0)
	while(n>=1)
	{
		printf("%d\n",i);
		i++;
		n--;
	}
	else
	printf("Entered value %d is not an natural number.",n);
}
