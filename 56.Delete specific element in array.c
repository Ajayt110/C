void main()
{
int len,i,d_ind;
	printf("enter length of array\n");
	scanf("%d",&len);
	int a[len],b[len];
	printf("enter %d elements\n",len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nElements in array before deletion\n");
	for(i=0;i<len;i++)
	printf("%d ",a[i]);
	printf("\nenter index of array to delete\n");
	scanf("%d",&d_ind);
	for(i=d_ind;i<len;i++)
	a[i]=a[i+1];
	len--;
	printf("\nElements in array after deletion\n");
	for(i=0;i<len;i++)
	printf("%d ",a[i]);
	
}
