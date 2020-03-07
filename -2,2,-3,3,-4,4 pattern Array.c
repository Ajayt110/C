void main()
{
	int neg[20],pos[20],plen=0,nlen=0,i,j,temp,tarray[20],merge[20],len;
	printf("enter length of array: ",len);
	scanf("%d",&len);
	int arr[len];
	printf("\nenter %d elements:\n",len);
	for(i=0;i<len;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<len;i++)
	{
		if(arr[i]>=0)
		{
		pos[plen]=arr[i];
		plen++;
		}
		else if(arr[i]<0)
		{
		neg[nlen]=arr[i];
		nlen++;
		}
	}
	printf("\n Positive elements");
	for(i=0;i<plen;i++)
	printf("%d  ",pos[i]);
	printf("\n Negative elements");
	for(i=0;i<nlen;i++)
	printf("%d  ",neg[i]);
	printf("\n");
	
	for(i=0;i<plen;i++)
	{
		for(j=i+1;j<plen;j++)
		{
		if(pos[i]>pos[j])
		{
			temp=pos[i];
			pos[i]=pos[j];
			pos[j]=temp;
		}
	}
	}
	for(i=0;i<nlen;i++)
	{
		for(j=i+1;j<nlen;j++)
		{
		if(neg[i]<neg[j])
		{
			temp=neg[i];
			neg[i]=neg[j];
			neg[j]=temp;
		}
	}
	}
	printf("\n Positive array sorted elements: ");
	for(i=0;i<plen;i++)
	printf("%d  ",pos[i]);
	printf("\n Negative array sorted elements: ");
	for(i=0;i<nlen;i++)
	printf("%d  ",neg[i]);
	printf("\n");
	
	for(i=0;i<nlen;i++)
	{
		tarray[i]=(-1*neg[i]);
	}
int k=0;
j=0;
printf("\n\n Final Elements after sorting in pattern are: \n ");
	for(i=0;i<len;i++)
	{
		if((tarray[j]!=0 || pos[k]!=0 )&& (j<nlen && k<plen))
		{
		if(tarray[j]<=pos[k])
		{
		printf("%d ",(-1*tarray[j]));
		j++;
		}
		else 
		{
		printf("%d ",pos[k]);
		k++;
		
		}
	}

	}
		for(i=0;i<plen;i++)
	{
	
	if(pos[i]>tarray[nlen-1])
	printf("%d ",pos[i]);
}
	for(i=0;i<nlen;i++)
	{
	
	if(tarray[i]>pos[plen-1])
	printf("%d ",(-1*tarray[i]));
}

}
