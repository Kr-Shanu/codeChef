import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
public class CHN15A
{

    public static void solution(int store[]){
        int count = 0;
        for(int i = 0; i < store.length; i++){
            if(store[i]%7==0)
                count++;
        }
        System.out.println(count);
    }

	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- > 0){
            int N = sc.nextInt();
            int K = sc.nextInt();
            int store[] = new int[N];

            for(int j = 0; j < N; j++){
                int temp = sc.nextInt();
                store[j] = temp + K;
            }
            solution(store);
        }
        sc.close();
	}
}