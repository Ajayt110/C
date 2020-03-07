void main()
{
	int len,i,odd_c=0,even_c=0;
	printf("enter length of array\n");
	scanf("%d",&len);
	int a[len];
	printf("enter %d elements\n",len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		even_c++;
		if(a[i]%2!=0)
		odd_c++;		
	}
	printf("Odd element count: %d",odd_c);
	printf("\nEven element count :%d",even_c);
}
