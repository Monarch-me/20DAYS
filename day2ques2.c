#include<stdio.h>
int main()
{
	int space,total,row,symbol,j,k;
	printf("enter total no. of rows :");
	scanf("%d",&total);
	for(row=1;row<=total;row++)
	{
		//print spaces
		for(space=1;space<=(2*(total-row));space++)
		{
			printf(" ");
		}
		//print symbols
		for(symbol=1;symbol<=row;symbol++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	k=total+1;
	for(j=1;j<=total;j++)
	{
		//print spaces
		for(space=1;space<((2*j)-1);space++)
		{
			printf(" ");
		}
		//print symbols
		for(symbol=1;symbol<=(k-j);symbol++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
