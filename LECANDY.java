import java.util.*;

public class LECANDY {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(), i, j, temp, N, C;
        for(i = 0; i < T; i++){
            N = sc.nextInt();
            C = sc.nextInt();
            int sum = 0;
            for(j = 0; j < N; j++){
                temp = sc.nextInt();
                sum = sum + temp;
            }
            System.out.println((sum<=C) ? "Yes" : "No");
        }
    }
}