
import java.util.*;
// import java.io.*;
// import java.lang.*;


public class PAIREQ {
    public static int solution(ArrayList<Integer> store){
        int count = 0;
        for(int i = 0; i < store.size(); i++){
            int percount = 0;
            for(int j = 0; j < store.size(); j++){
                if(store.get(i)==store.get(j))
                    percount++;
            }
            if(percount>count)
                count=percount;
        }
        return count;
    }

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int i = 0; i < T; i++){
            int N = sc.nextInt();
            ArrayList<Integer> store = new ArrayList<>();
            for(int j = 0; j < N; j++){
                int temp = sc.nextInt();
                store.add(temp);
            }
            System.out.println(solution(store) == 0 ? N-1 : N - solution(store));
        }
        sc.close();
    }
}