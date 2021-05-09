import java.util.*;
public class LeftRotation {
    public static void main(String[] args) {
        int i,j,m,temp,n;
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the size of array:");
        n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("enter the elements :");
        for(i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("enter the rotation you need :");
        m=sc.nextInt();
        int k=arr.length;
       while(m>0)
       {
           temp=arr[0];
           for(j=0;j<(k-1);j++)
           {
               arr[j]=arr[j+1];
           }
           arr[n-1]=temp;
           m--;
       }
        for(i=0;i<k;i++)
        {
            System.out.println(arr[i]+" ");
        }
    }
}
