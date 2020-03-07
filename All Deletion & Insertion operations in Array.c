#include<stdio.h>
int len;
int a[50];
void insert_ele_end(int nel)
{	
	a[len]=nel;
	len++;
}
void insert_first(int nel)
{
	int i;
	len+=1;
	for(i=len;i>0;i--)
	{
		a[i]=a[i-1];	
	}
	a[0]=nel;
}
void insert_at_index(int ind, int nel)
{
	int i;
	len++;
	for(i=len;i>ind;i--)
	{
		a[i]=a[i-1];	
	}
	a[ind]=nel;
}
void display()
{
	int i;
	printf("\nFinal Array is \n");
	for(i=0;i<len;i++)
	printf("%d  ",a[i]);
	printf("\n");
	
}
void delete_search_element(int ele)
{
	int i,j,k;
	for(k=0;k<len;k++)
	{
	
	for(i=0;i<len;i++)
	{
		if(a[i]==ele)
		{	
		for(j=i;j<len;j++)
		{
			a[j]=a[j+1];
		}
		len--;
		}		
	}
	}
	}

void delete_at_index(int ind)

{
	int i;
	for(i=ind;i<len;i++)
	{
		a[i]=a[i+1];
	}
	--len;

}
void option()
{
	int index,ele,nel,ind;
	int opt;
	printf("Enter an option\n 1.To delete at index.\n 2.To delete specific element.\n 3.Insert an element at end. \n");
	printf("4.Insert at the array begining.\n 5.Insert at any index.\n 6. To display the array\n Enter any other character or number to exit the loop. Your option is : ");

	scanf("%d",&opt);
	if(opt==1)
	{
	printf("enter an deletetion index: ");
	scanf("%d",&index);
	delete_at_index(index);
	display();
	option();
	
	}
	else if(opt==2)
	{
	printf("enter an specific element to delete in array : ");
	scanf("%d",&ele);
	delete_search_element(ele);
	display();
	option();
	}
	else if(opt==3)
	{
	
		printf("Enter an element to insert: \n");
		scanf("%d",&nel);
		insert_ele_end(nel);
			display();
			option();

	}
	else if(opt==4)
	{
	
		printf("Enter an element to insert at first: \n");
		scanf("%d",&nel);
		insert_first(nel);
			display();
			option();

	}
	else if(opt==5)
	{
	printf("Enter an index to insert element: \n");
	scanf("%d",&ind);
	printf("Enter the element to insert: \n");
	scanf("%d",&nel);
		insert_at_index(ind,nel);
		display();
		option();

	}
	else if(opt==6)
	{
		
		display(a,len);
		option();

	}
	else
	printf("\nExited the loop.");
	
}
void main()
{
	option(a,len);
}
