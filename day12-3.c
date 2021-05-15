#include<stdio.h>
void main()
{
	int i,j=0,arr[50],n,k,count=0;
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("enter the number to be shifted from the above array:");
		scanf("%d",&k);
	for(i=0;i<n;i++)
	{
	if(arr[i]!=k)
	{
		arr[count++]=arr[i];
	}
	}
	while(count<n)
	{
		arr[count++]=k;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
