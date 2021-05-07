#include <stdio.h> 
int main() 
{ 
    int n; 
    int arr [100];
     int i;
    int x = 0; // this is to store the continuous XOR  
   printf("enter the size of array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf(" enter element #%d : ",i+1);
		scanf("%d",&arr[i]);
	}
    for( i = 0;i<n;i++)
	{ 
        x = x ^ arr[i]; 
    } 
    printf("Non repeated element is  : %d",x); 
 
    return 0; 
} 
