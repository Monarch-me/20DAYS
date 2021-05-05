#include<stdio.h>
int main()
{
	int total,row,spaces ,symbol;
	printf("enter number of rows");
	scanf("%d", &total);
	for(row=1;row<=total;row++)
	{
		//print spaces
		for(spaces=1;spaces=(total-row);spaces++)
		printf(" ");
		//print symbol
		for(symbol=1;symbol<=((2*row)-1);symbol++)
		printf("*");
		
		printf("\n");
	}
	return 0;	
}
