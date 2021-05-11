#include<stdio.h>
void main()
{
	int i,j,n,arr[n],count=0,ele=0,l,temp=0,tempCount;
	printf("enter the size of the array :");
	scanf("%d",&n);
	printf("enter the elements of the array :");
	for(l=0;l<n;l++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		temp = arr[i];
		tempCount=0;
		for(j=0;j<n;j++)
		{
			if(temp==arr[j])
			tempCount++;
			if(tempCount>count)
			{
				ele=temp;
				count=tempCount;
			}
		}
	}
	printf("most frequent element is %d :",ele);
	printf("\nfrequency is %d",count);
}
