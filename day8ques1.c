#include <stdio.h>  
int main()  
{
    int n, i , j, count=0, candy = 0;;
    printf("enter size of array  : ");
    scanf("%d",&n);
    int arr[n];
    int newarr[n];
    printf("enter elements of array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        count = 0;
        for(j=0;j<=i;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
          
            candy++;
        }
    }
    printf("total number of candies that ethan will have is : %d",candy);
    
    return 0;
}  
