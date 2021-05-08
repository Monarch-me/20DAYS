//sorting using insertion sort
#include<stdio.h>
void main()
{
	int i,j,n,k;
	int arr[50];
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		k=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>k)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=k;
	}
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
}
