/* package codechef; // don't place package name! */

import java.util.Scanner;


/* Name of the class has to be "Main" only if the class is public. */
public class ENSPACE
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int s = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();
            System.out.println(s>=(x+2*y)?"YES":"NO");
        }
        sc.close();
	}
}
