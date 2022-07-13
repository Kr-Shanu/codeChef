package java;
import java.util.Scanner;

public class CHEFCAND {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int x = sc.nextInt();

            if (x >= n)
                System.out.println("0");
            else {
                int candy_req = n - x;
                System.out.println((candy_req % 4 == 0) ? (candy_req / 4) : ((candy_req / 4) + 1));
            }
        }
        sc.close();
    }
}