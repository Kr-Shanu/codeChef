package java;
import java.util.Scanner;

public class AUCTION {
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            if(a>b && a>c)
                System.out.println("Alice");
            else if(b>a && b>c)
                System.out.println("Bob");
            else
                System.out.println("Charlie");
        }
        sc.close();
    }
}
