void main()
{
	int n;
	printf("Enter n to print the natural numbers till the limit in reverse.\n\nValue of n is :");
	scanf("%d",&n);
	printf("\n");
	if(n>0)
	while(n>=1)
	{
		printf("%d\n",n);
		n--;
	}
	else
	printf("Entered value %d is not an natural number.",n);
}
