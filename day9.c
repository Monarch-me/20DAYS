#include<stdio.h>
int main()
{
	int i,j,n,arr[50][50],lsum=0,rsum=0;
	printf("enter the order of array:");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the %d,%d element : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
			
		}printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				lsum=lsum+arr[i][j];
			
			if((i+j)==(n-1))
				rsum =rsum+arr[i][j];
			
		}
	}
	printf("the left diagnol sum is : %d\n",lsum);
	printf("the right diagnol sum is : %d",rsum);
return 0;
}
