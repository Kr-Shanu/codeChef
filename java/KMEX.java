package java;


not able to do , so complete it 

/* package codechef; // don't place package name! */

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;


/* Name of the class has to be "Main" only if the class is public. */
public class KMEX
{
    // function to calculate mex
    public static int mex(ArrayList<Integer> arr){
        int mex = -1, i =0;
        while(true){
            if(!arr.contains(i)){
                mex = i;
                // System.out.println("MEx = "+ mex);
                return mex;
            }
            i++;
        }
        
    }

	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int m = sc.nextInt();
            int k = sc.nextInt();
            int k_count = 0;
            ArrayList<Integer> store = new ArrayList<>();
            for(int i = 0; i < n ; i++){
                int temp = sc.nextInt();
                if(temp == k)
                    k_count++;
                store.add(temp);
            }

            ArrayList<Integer> increasing = new ArrayList<>();
            ArrayList<Integer> decreasing = new ArrayList<>();

            Collections.sort(store);

            for(int i = 0; i < m; i++){
                increasing.add(store.get(i));
                decreasing.add(store.get(store.size()-1-i));
            }


            if((mex(increasing)==k) || (mex(decreasing)==k))
            {
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }




        }
        sc.close();
	}
}