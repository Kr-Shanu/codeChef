package java;
/* package codechef; // don't place package name! */
import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
public class CNOTE 
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        int i, j;
        for(i = 0; i < T; i++){
            int x, y, k, n;
            x = sc.nextInt();
            y = sc.nextInt();
            k = sc.nextInt();
            n = sc.nextInt();
            int pi, ci;
            boolean success = false;
            for(j = 0; j < n; j++){
                pi = sc.nextInt();
                ci = sc.nextInt();
                if(ci<=k && pi>=(x-y))
                {
                    success = true;
                }
            }
            System.out.println(success?"LuckyChef":"UnluckyChef");
        }
	}
}