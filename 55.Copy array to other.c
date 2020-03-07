void main()
{
int len,i;
	printf("enter length of array\n");
	scanf("%d",&len);
	int a[len],b[len];
	printf("enter %d elements\n",len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	printf("\tElements of 1st array\t");
	for(i=0;i<len;i++)
		printf("%d ",a[i]);
	printf("\n\n\tElements of 2nd array\t");
		for(i=0;i<len;i++)
		printf("%d ",b[i]);
}
	
