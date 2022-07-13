package java;
/* package codechef; // don't place package name! */

import java.util.Scanner;


/* Name of the class has to be "Main" only if the class is public. */
public class TEA
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            double x = sc.nextDouble();
            double y = sc.nextDouble();
            double z = sc.nextDouble();
            // Math.ceil((x/y)*z)

            // double value = (int)(Math.ceil(x/y));
            // System.out.println(x/y);
            // System.out.println(Math.ceil(x/y));
            System.out.println((int)((Math.ceil(x/y))*z));




            // System.out.println((int)(Math.ceil((x/y)*z)));
        }
        sc.close();
	}
}
