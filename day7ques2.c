#include<stdio.h>
void main()
{
	int i,j,n,arr[n],count;
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("enter the elememts :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)	
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			count++;
		}
		if(count==1)
	printf("%d ",arr[i]);
	}
}
