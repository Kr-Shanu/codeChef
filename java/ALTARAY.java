package java;

// complete the program using allray list, take input save it and then print
// or if possible find some other way out for efficient one

/* package codechef; // don't place package name! */

// import java.util.*;
// import java.lang.*;
// import java.io.*;

public class ALTARAY {

    public static void alternate(int arr[]) {

        int i, count, j;

        for (i = 0; i < arr.length; i++) {

            count = 1;

            for (j = i; j < (arr.length - 1); j++) {

                if ((arr[j] * arr[j + 1]) < 0)
                    count++;
                else
                    break;

            }

            System.out.print(count + " ");

        }
        System.out.println();

    }

    public static void main(String[] args) {


        int store[] = {-5, -1, -1, 2, -2, -3, 10, -5, 12};
        alternate(store);


    }
}