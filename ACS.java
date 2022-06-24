import java.util.*;

public class ACS {
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int i = 0 ; i < T; i++){
            int n = sc.nextInt();
            int quotient = n/100;
            int remainder = n%100;
            System.out.println((quotient+remainder)>10?-1:(quotient+remainder));
        }
        sc.close();
    }
}