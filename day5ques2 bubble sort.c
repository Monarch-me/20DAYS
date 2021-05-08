//sorting using bubble sort
#include<stdio.h>
void main()
{
	int i,j,con,temp,arr[100],n;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	con=1;
	while(con<(n-1))
	{
		for(i=0;i<(n-con);i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	con++;
	}
		for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
} 
