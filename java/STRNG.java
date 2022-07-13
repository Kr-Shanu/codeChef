package java;

not abke to do it as well

import java.util.*;

public class STRNG {

    public static int gcd(int a, int b){
        if(a==0)
            return b;
        return gcd(b%a, a);
    }

    // function to return the gcd of the array
    public static int gcd(int arr[]){
        int result = arr[0];
        for(int i = 1; i < arr.length; i++){
            result = gcd(arr[i], result);
            if(result == 1)
                return 1;
        }
        return result;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for(int i = 0; i < T; i++){

            int N = sc.nextInt();
            int store[] = new int[N];

            for(int j = 0; j < N; j++){
                int temp = sc.nextInt();
                store[j] = temp;
            }

            int gcd_value = gcd(store);
            System.out.println("gcd_value = "+gcd_value);


                int no_of_strong_index = 0;
                int duplicate_array[] = new int[N];
                for(int l = 0; l < N; l++)
                {
                    duplicate_array[l] = store[l];
                }

                for(int k = 0; k < N; k++){

                    duplicate_array[k] = duplicate_array[k]+1;
                    if(gcd(duplicate_array)!=gcd_value)
                    {
                        System.out.println("gcd of duplicate = "+ gcd(duplicate_array)+" for the value of "+duplicate_array[k]+" in place of "+store[k]);
                        no_of_strong_index++;
                    }
                }

                System.out.println(no_of_strong_index);

        }
        sc.close();
        
    }
}