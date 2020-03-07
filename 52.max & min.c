void main()
{
	int len,i,max,min;
	printf("enter length of array\n");
	scanf("%d",&len);
	int a[len];
	printf("enter %d elements\n",len);
	for(i=0;i<len;i++)
	{
	scanf("%d",&a[i]);
	if(i==0)
	{
	max=a[0];
	min=a[0];
	}
	if(a[i]>max)
	max=a[i];
	else if(a[i]<min)
	min=a[i];
}
	printf("Max :%d",max);
	printf("\nMin :%d",min);
}
