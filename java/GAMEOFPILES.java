package java;
import java.util.Arrays;
import java.util.Scanner;

public class GAMEOFPILES {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            long store[] = new long[n];
            for(int i = 0; i < n; i++){
                store[i] = sc.nextLong();
            }
            Arrays.sort(store);
            System.out.println(store[0]%2==0?"CHEFINA":"CHEF");
        }
        sc.close();
    }
}