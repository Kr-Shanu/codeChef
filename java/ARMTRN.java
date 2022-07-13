package java;
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class ARMTRN
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){

            int i, j;

            int n = sc.nextInt();
            long store[] = new long[n];
            for(i = 0; i < n; i++){
                store[i] = sc.nextLong();
            }

            Arrays.sort(store);

            long defender_sum = 0;
            for(i = 0; i < n/2; i++){
                defender_sum+=(1000-store[i]);
            }

            long attacker_sum = 0;
            for(j = 0; j < n-n/2; j++){
                attacker_sum+=store[i];
                i++;
            }


            if(n%2==0)
            {
                System.out.println(defender_sum*attacker_sum);
            }
            else
            {

                long product1 = defender_sum * (attacker_sum);
                long product2 = (defender_sum+(1000-store[n/2])) * (attacker_sum-store[n/2]);
                System.out.println(product1>product2?product1:product2);

            }



        }
        sc.close();


	}
}
