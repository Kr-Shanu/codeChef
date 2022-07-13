package java;
/* package codechef; // don't place package name! */

import java.util.Scanner;


/* Name of the class has to be "Main" only if the class is public. */
public class ARRAYRET
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- > 0){

            int n = sc.nextInt();
            long sum_of_b = 0;
            long store[] = new long[n];

            for(int i = 0; i < n ; i++){
                long temp = sc.nextLong();
                store[i] = temp;
                sum_of_b = sum_of_b + temp;
            }

            long sum_of_a = sum_of_b/(n+1);

            for(int i = 0; i < n ; i++){
                System.out.print(store[i]-sum_of_a + " ");
            }

            System.out.println();

        }
        sc.close();
	}
}
