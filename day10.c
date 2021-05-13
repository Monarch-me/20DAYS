//sorting using selection sort
#include<stdio.h>
void main()
{
	int i,j,n,k,miss;
	int arr[50];
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	for(i=0;i<(n-1);i++){
		for(j=(i+1);j<n;j++){
			if(arr[j]<arr[i]){
				k=arr[j];
				arr[j]=arr[i];
				arr[i]=k;
			}
		}
	}
	printf("the sorted array is :\n");
	for(i=0;i<n;i++)
	{
			printf(" %d",arr[i]);
			//printf("\n the missing element is :");
	}printf("\n");
	for(i=0;i<(n-1);i++)
	{
		if((arr[i]+1)!=arr[i+1]){
				miss=arr[i]+1;
	}

}
	printf("\n the missing element is :%d",miss);
}
