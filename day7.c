#include<stdio.h>
int main()
{
	int i,ja[50],n,arr[n];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements :");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
		int k=(n-1);
	for(i=0;i<n;i++)	
		ja[i]=arr[k-i];
	printf("array after reverse is :");
	for(i=0;i<n;i++)
		printf("%d\t",ja[i]);
		return 0;
	
}
