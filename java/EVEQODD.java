package java;
/* package codechef; // don't place package name! */

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
public class EVEQODD {


    public static int steps_req(int n){
        int c = 0;
        // int duplicate = n;
        while(n%2==0){
            n/=2;
            c++;
        }
        // System.out.println("Steps required for "+ duplicate + " = "+ c);
        return c;
    }

    public static void solution(int oddCount, int evenCount, ArrayList<Integer> evenArray, int n){

        if(oddCount==evenCount)
            System.out.println("0");
        else if(oddCount>evenCount) 
            System.out.println(n-evenCount);
        else{
            int no_of_steps = 0;

            for(int i = 0; i < (n-oddCount); i++){
                no_of_steps += evenArray.get(i);
            }
            System.out.println(no_of_steps);
        }
    }

    // The main function.
    public static void main(String[] args) throws java.lang.Exception {

        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {

            int n = sc.nextInt();
            int oddCount = 0, evenCount = 0;

            ArrayList<Integer> evenStore = new ArrayList<Integer>();

            for (int i = 0; i < (2 * n); i++) {

                int temp = sc.nextInt();

                if (temp % 2 == 0) {

                    evenCount++;
                    evenStore.add(steps_req(temp));

                } 
                else
                    oddCount++;
            }

            // System.out.println("Unsorted Array = "+ evenStore);
            Collections.sort(evenStore);
            // System.out.println("Sorted Array = "+ evenStore);
            solution(oddCount, evenCount, evenStore, n);
        }
        sc.close();
    }
}