#include<stdio.h>
void main()
{
	int i,j,k,n,arr[5]={1,2,5,4,3},temp=0,minsum=0,maxsum=0;
/*	printf("enter the size of array :");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]); */
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	/*uncomment this to view sorted array
	for(i=0;i<5;i++)
		printf("%d ",arr[i]); */
	
	for(i=0;i<4;i++)
		{
		minsum=minsum+arr[i];
		maxsum=maxsum+arr[i+1];}

printf("%d %d",minsum,maxsum);
}
