#include<stdio.h>
void main()
{
	int i,j,n,arr[50],temp;
	printf("enter the size of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element #%d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("enter number by which you want to shift the whole array :");
	scanf("%d",&j);

	while(j>0)
	{
	temp=arr[0];
	for(i=0;i<n;i++)
	{
	
	arr[i]=arr[i+1];	
	}
	arr[n-1]=temp;
	j--;
	}
		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
}
