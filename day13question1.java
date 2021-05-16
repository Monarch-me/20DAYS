//import  java.util.Scanner;
//import java.lang.String;
 public class day13question1 {
    public static int firstUnique(String var) {

       // Scanner sc= new Scanner(System.in);
         //String var;
        /*System.out.println("enter the string");
        var = sc.next();*/
        int i,j,count=1;
        for(i=0; i< var.length(); i++)
        {
            for(j=0; j< var.length(); j++)
            {
                if(i!=j && var.charAt(i)== var.charAt(j))
                {
                    count++;
                    break;
                }
            }
            if(count==1)
            {
                return i;
            }

        }
       return -1;
    }

     public static void main(String[] args) {
         String var="character";

         int index=firstUnique(var);
         System.out.println(index);

     }
}
