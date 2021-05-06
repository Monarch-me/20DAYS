#include<stdio.h>
void main()
{
	int i,n,j,max,min;
	int arr[100];
	printf("enter the size of array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf(" enter element #%d : ",i+1);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
		max=arr[i];
		}
	}
	printf("the maximum value is :%d\n",max);
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
		min=arr[i];
		}
	}
	printf("the minimum value is :%d",min);
}
