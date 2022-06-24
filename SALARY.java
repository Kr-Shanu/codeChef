/* I could not do it by my own, i had to see to its solution. */


/* package codechef; // don't place package name! */
import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
public class SALARY
{
    public static int min(ArrayList<Integer> arr){
        int min = arr.get(0);
        
        for(int i = 1; i < arr.size(); i++){
            if(arr.get(i)<min)
                min = arr.get(i);
        }
        return min;
    }

    public static void solution(ArrayList<ArrayList<Integer>> store){
        int i , j;
        for(i = 0; i < store.size(); i++){
            int count = 0, min = min(store.get(i));
            for(j = 0; j < (store.get(i)).size(); j++){   
                count = count + ((store.get(i).get(j))-min);
            }
            System.out.println(count);
        }
    }

	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        ArrayList<ArrayList<Integer>> store = new ArrayList<>();
        for(int i = 0; i < T; i++){
            ArrayList<Integer> store_n = new ArrayList<>();
            int N = sc.nextInt();
            for(int j = 0; j < N; j++){
                int temp = sc.nextInt();
                store_n.add(temp);
            }
            store.add(store_n);
        }
        sc.close();
        solution(store);
	}
}