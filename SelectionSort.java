
import java.io.*;
import java.util.Scanner;

class SelectionSort {
    
    
    static void selectionSort(int arr[], int n){
        for(int i = 0; i < n; i++){
            int min_ind = i;
            
            for(int j = i + 1; j < n; j++){
                if(arr[j] < arr[min_ind]){
                    min_ind = j;
                }
            }
            
            int temp = arr[i];
            arr[i] = arr[min_ind];
            arr[min_ind] = temp;
        }
    }
    
    
	public static void main (String[] args) {
	    Scanner scan=new Scanner(System.in);
	    int n=scan.nextInt();
	    int a[]=new int[n];
	    for(int i=0;i<n;i++){
	        a[i]=scan.nextInt();
	    }
	    selectionSort(a, n);
	    
	    for(int i = 0; i < n; i++){
	        System.out.print(a[i] + " ");
	    }
	}
}
