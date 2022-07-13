package java;
/* package codechef; // don't place package name! */

import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
public class CHANGEPOS
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int a= sc.nextInt(), b = sc.nextInt(), c = sc.nextInt(), d= sc.nextInt();
            if(a!=c && b!=d)
                System.out.println("1");
            else
                System.out.println("2");
        }
        sc.close();
	}
}