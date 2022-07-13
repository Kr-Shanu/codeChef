package java;



This code is still not working, try to improve it okie

/* package codechef; // don't place package name! */

import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
public class RAINBOWA
{

    public static boolean isPaliandrome(int arr[]){

        boolean ispalian = true;

        for(int i = 0; i < arr.length/2; i++){
            if(arr[i]!=arr[arr.length-1-i])
                ispalian = false;
        }

        return ispalian;
    }

    public static boolean isRainbow(int arr[]){

        int length = arr.length;
        
        if(length%2==0 || arr.length/2!=7)
            return false;
        else
        {
            boolean israin = true;
    
            for(int i = 0; i < length; i++){
                if(i < length/2){
                    if(arr[i+1]>arr[i]+1)
                        return false;
                }else if(i==length/2){
                    if(arr[i]!=7)
                        return false;
                }
                else{
                    if(arr[i]>arr[i-1]) 
                        return false;
                }
            }
            return israin;
        }
    }

	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- > 0){

            int N = sc.nextInt();
            int arr[] = new int[N];

            while(N-- > 0){
                int i = 0;
                arr[i] = sc.nextInt();
                i++;
            }

            if(isPaliandrome(arr) && isRainbow(arr))
                System.out.println("yes");
            else
                System.out.println("no");

        }
        sc.close();
	}
}