import java.util.Scanner;

public class day18 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the total number of pages ");
        int  n= sc.nextInt();
        System.out.println("enter desired page number");
        int p=sc.nextInt();
        int totalTurns= n/2;
        int turnFromFront=p/2;
        int turnFromBack=totalTurns-turnFromFront;
        int c =Math.min(turnFromBack,turnFromFront);
        System.out.println("least number of pages to be turn is :"+c);
    }

}
