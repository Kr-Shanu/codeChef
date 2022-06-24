
import java.util.*;

public class DNASTRAND {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int i =0; i < T; i++){
            int N = sc.nextInt();
            String answer = "";
            String nitro = sc.next();
            for(int j = 0; j < N; j++){

                char ch = nitro.charAt(j), adding_value;

                switch (ch) {
                    case 'A':
                        adding_value = 'T';
                        break;
                    case 'T':
                        adding_value = 'A';
                        break;
                    case 'G':
                        adding_value = 'C';
                        break;
                    case 'C':
                        adding_value = 'G';
                        break;
                    default:
                        adding_value = ' ';
                        break;
                }
                answer = answer + adding_value;
            }
            System.out.println(answer);
        }
        sc.close();
    }    
}