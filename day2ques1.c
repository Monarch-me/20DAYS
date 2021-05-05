#include<stdio.h>
#include<conio.h>
void main()
{
	int total,row,space,symbol,n,k=1;
	printf("enter no. of rows :\n");
	scanf("%d",&total);
	n=total;
	for(row=1;row<=total;row++)
	{
		for(space=1;space<=(row-1);space++)
		{
			printf(" ");
		}
		
		for(symbol=k;symbol<=n;symbol++)
		{
			printf("%d ",symbol);
		}
		k++;
		printf("\n");
	}
	for(row=1;row<=total;row++)
	{
		for(space=1;space<=(total-row);space++)
		{
			printf(" ");
		}
		for(symbol=n;symbol<=total;symbol++)
		{
			printf("%d ",symbol);
		}
		n--;
		printf("\n");
	}
}
