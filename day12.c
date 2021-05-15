#include<stdio.h>
void main()
{
	int i,j,n,k,temp,sort[50],arr[50],sum=0;
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("enter the number to be shifted from the above array:");
	scanf("%d",&k);
	
	for(i=0;i<n;i++)
	{
		if(k==arr[i])   
		{
			sum++;
			sort[sum]=arr[i];
		}
		if(k!=arr[i])
		{
			sort[i-1]=arr[i];
		}
	}
	printf("same elements are:\n");
	printf("frequency of occurence is %d\n",sum);
	for(i=0;i<sum;i++)
		printf("%d ",sort[i]);

}
