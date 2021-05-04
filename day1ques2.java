import java.util.*;
public class day1ques2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter word :");
		String arr =sc.next();
		int n1= arr.length();
		int n=n1-1;
		
	char c1=arr.charAt(0);
	char c2=arr.charAt(1);
	char c3=arr.charAt(2);
	char c4=arr.charAt(n);
	char c5=arr.charAt(n-1);
	char c6=arr.charAt(n-2);
	
	if (c1== 'd' && c2 =='a' && c3=='v' && c4=='i' && c5=='h' && c6=='c' )
	{
		System.out.println("correct code");
	}
	else
	{
		System.out.println("access denied");
	}
			
	}

}
