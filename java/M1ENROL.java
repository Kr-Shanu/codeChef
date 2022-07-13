package java;
import java.util.Scanner;


/* Name of the class has to be "Main" only if the class is public. */
class M1ENROL
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){

            int x = sc.nextInt();
            int y = sc.nextInt();

            System.out.print(y>x?(y-x):"0");
        }
        sc.close();

	}
}
