import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
public class newtonOne {
	public static void main (String[] args) {
        // Your code here
		Scanner sc = new Scanner(System.in);
		int p = sc.nextInt();
		int sec = sc.nextInt();
		System.out.println(p*(int)(Math.pow(2,sec)));
        sc.close();
	}
}