package java;

import java.util.*;
// import java.io.*;
// import java.lang.*;


public class PAIREQ {
    public static int solution(int store[], int N){
        
        int count = 0;
        
        for(int i = 0; i < N; i++){
            
            int percount = 0;
            
            for(int j = 0; j < N; j++){
                if(store[i]==store[j])
                    percount++;
            }
            if(percount>count)
                count=percount;
        }
        return count;
    }

    public static void main(String[] args)throws java.lang.Exception{

        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        
        for(int i = 0; i < T; i++){
            
            int N = sc.nextInt();
            
            int store[] = new int[N];
            
            for(int j = 0; j < N; j++){
                int temp = sc.nextInt();
                store[j] = temp;
            }
            
            // System.out.println(solution(store));
            System.out.println(N - solution(store, N));
        }
        sc.close();
    }
}