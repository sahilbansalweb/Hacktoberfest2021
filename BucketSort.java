//Bucket sort, or bin sort, is a sorting algorithm that works by distributing the elements of an array into a number of buckets.
//Each bucket is then sorted individually, either using a different sorting algorithm, or by recursively applying the bucket sorting algorithm.

//The Entire Bucket Sort Algorithm is written below in Java

import java.util.*;

public class BucketSort {
    public static void bucketSort(int[] arr) {
        int num_of_buckets = (int) Math.ceil(Math.sqrt(arr.length));
        int maxVal = Integer.MIN_VALUE;
        for (int element : arr) {
            if (element > maxVal) {
                maxVal = element;
            }
        }

        ArrayList<Integer>[] buckets = new ArrayList[num_of_buckets];

        for (int i = 0; i < buckets.length; i++) {
            buckets[i] = new ArrayList<Integer>();
        }

        for (int element : arr) {
            int bucketVal = (int) Math.ceil((float) element * num_of_buckets / maxVal);
            buckets[bucketVal - 1].add(element);
        }

        // Sort buckets
        for (int i = 0; i < num_of_buckets; i++) {
            System.out.println(buckets[i]);
            Collections.sort(buckets[i]);
        }
        int k = 0;
        for (int i = 0; i < num_of_buckets; i++) {
            for (int j = 0; j < buckets[i].size(); j++) {
                arr[k] = buckets[i].get(j);
                k++;
            }
        }
    }

    public static void printArrays(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

}

