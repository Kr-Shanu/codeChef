package java;
/* package codechef; // don't place package name! */

import java.util.Scanner;


/* Name of the class has to be "Main" only if the class is public. */
public class ACCURACY
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int x = sc.nextInt();
            int remainder = x%3;
            switch (remainder) {
                case 0:
                    System.out.println("0");
                    break;
                case 1:
                    System.out.println("2");
                    break;
                case 2:
                    System.out.println("1");
                    break;
                default:
                    System.out.println("Not possible");
                    break;
            }
        }
        sc.close();
	}
}
