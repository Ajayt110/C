void main()
{
	int num,i,max,len,sec;
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
	sec=a[0];
	}
	if(a[i]>max)
	{
		sec=max;
		max=a[i];
	}
	else if(a[i]>sec && a[i]!=max)
	sec=a[i];
}
printf("Max :%d",max);
printf("\nSecond Max :%d",sec);
}
