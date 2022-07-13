package java;
/* package codechef; // don't place package name! */

import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
public class ADJSUMPAR
{
    public static void solution(int b[]){
        int a[] = new int[b.length];
        if(b[0]==0)
        {
            a[0] = 2;
            a[1] = 2;
        }else
        {
            a[0] = 2;
            a[1] = 1;
        }

        for(int i = 1; i < (b.length-1); i++){
            if(b[i] == 0){
                if(a[i] == 2)
                    a[i+1] = 2;
                else
                    a[i+1] = 1;
            }else
            {
                if(a[i] == 2)
                    a[i+1] = 1;
                else
                    a[i+1] = 2;
            }
        }

        if((a[(a.length)-1]+a[0])%2 == b[b.length-1])
            System.out.println("YES");
        else
            System.out.println("NO");


    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n= sc.nextInt();
            int arr[] = new int[n];
            for(int i =0; i<n; i++){
                int temp = sc.nextInt();
                arr[i] = temp;
            }
            solution(arr);
        }
        sc.close();
	}
}