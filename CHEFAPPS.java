/* package codechef; // don't place package name! */



import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
public class CHEFAPPS
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int s= sc.nextInt(), x = sc.nextInt(), y = sc.nextInt(), z= sc.nextInt();
            if((x+y+z)<=s)
                System.out.println("0");
            else if((y+z)<=s || (x+z)<=s)
                System.out.println("1");
            else
                System.out.println("2");
        }
        sc.close();
	}
}