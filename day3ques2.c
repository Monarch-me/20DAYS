#include<stdio.h>
void main()
{
	int i, arr[100];
	int n,j,k=0;
	printf("enter the size of array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf(" enter element #%d : ",i+1);
		scanf("%d",&arr[i]);
	
	}
	printf("enter the number to be searched through array :\n");
	scanf("%d",&j);
	for(i=0;i<n;i++)
	{
			if(arr[i]==j)
			{
				k=1;
				break;
			}
	}
	if(k==1)
	{
		printf("the index is of %d is : %d ",j,i);
	}
	else
	{
		printf("-1");
	}
}
