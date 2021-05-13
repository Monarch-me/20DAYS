#include<stdio.h>
void main()
{
	int i,j,n,arr[50],temp,k;
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
	} 
	printf("\nthe 3rd smallest no. is : %d",arr[2]);
	printf("\nthe 3rd largest no. is : %d",arr[n-3]);

}
