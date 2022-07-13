package java;

import java.util.Arrays;
import java.util.Scanner;


/* Name of the class has to be "Main" only if the class is public. */
public class GRPASSN 
{

    public static int frequency(int n, int store[]){
        int freq = 0;

        for(int i = 0; i < store.length; i++){
            if(store[i]==n)
                freq++;
        }

        return freq;

    }

	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){

            int n = sc.nextInt();
            int store_element[] = new int[n];
            
            for(int i = 0; i < n; i++){
                store_element[i] = sc.nextInt();
            }

            Arrays.sort(store_element);

            // boolean grp = true;

            // for(int i = 0; i < n; i++){

            //     int freq_of_element = frequency(store_element[i], store_element);
            //     if(freq_of_element%store_element[i]!=0){
            //         grp = false;
            //     }
            
            // }



            for(int i = 0; i < n ; i++){
                int frequency = 0;

                for(int j = i; j < n; j++){
                    if(store_element[i] == store_element[j])
                    {
                        frequency++;
                    }
                    else if(j==(n-1)){
                        System.out.println(frequency%store_element[i]==0?"YES":"NO");
                        i = j;
                        break;
                    }
                    else 
                    {
                        System.out.println(frequency%store_element[i]==0?"YES":"NO");
                        i = j-1;
                        break;
                    }
                }
            }

            }

        sc.close();

	}
}
