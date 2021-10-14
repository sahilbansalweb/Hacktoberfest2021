#include <stdio.h>

int m, n, i, j, al[10][10], max[10][10], av[10], need[10][10], temp, z, y, p, k;

void main() {

  printf("\n Enter no of processes : ");
  scanf("%d", &m); // enter numbers of processes

  printf("\n Enter no of resources : ");
  scanf("%d", &n); // enter numbers of resources

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("\n Enter instances for al[%d][%d] = ", i,j); // al[][] matrix is for allocated instances
      scanf("%d", &al[i][j]);
      // al[i][j]=temp;
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("\n Enter instances for max[%d][%d] = ", i,j); // max[][] matrix is for max instances
      scanf("%d", &max[i][j]);
    }
  }

  for (i = 0; i < n; i++) {
    printf("\n Available Resource for av[%d] = ",i); // av[] matrix is for available instances
    scanf("%d", &av[i]);
  }

  // Print allocation values
  printf("Alocation Values :\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf(" \t %d", al[i][j]); // printing allocation matrix
    }
    printf("\n");
  }

  printf("\n\n");

  // Print max values
  printf("Max Values :\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf(" \t %d", max[i][j]); // printing max matrix
    }
    printf("\n");
  }

  printf("\n\n");

  // Print need values
  printf("Need Values :\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      need[i][j] = max[i][j] - al[i][j]; // calculating need matrix
      printf("\t %d", need[i][j]);       //  printing need matrix
    }
    printf("\n");
  }

  p = 1; // used for terminating while loop
  y = 0;
  while (p != 0) {

    for (i = 0; i < m; i++) {
      z = 0;
      for (j = 0; j < n; j++) {
        if (need[i][j] <= av[j] &&
            (need[i][0] != -1)) { // comparing need with available instance and
                                  // checking if the process is done
                                  // or not
          z++;                    // counter if condition TRUE
        }
      }

      if (z == n) { // if need<=available TRUE for all resources then condition
                    // is TRUE

        for (k = 0; k < n; k++) {
          av[k] += al[i][k]; // new work = work + allocated
        }
        printf("\n SS process %d", i); // Print the Process
        need[i][0] = -1;               // assign -1 if Process done
        y++;                           // cont if process done
      }

    } // end for loop

    if (y == m) { // if all done then
      p = 0;      // exit while loop
    }

  } // end while

  printf("\n");

}


/*
After Input of all required values 
OUTPUT RESULT
Alocation Values :
 	 0 	 0 	 1 	 2
 	 1 	 0 	 0 	 0
 	 1 	 3 	 5 	 4
 	 0 	 6 	 3 	 2
 	 0 	 0 	 1 	 4
Max Values :
 	 0 	 0 	 1 	 2
 	 1 	 7 	 5 	 0
 	 2 	 3 	 5 	 6
 	 0 	 6 	 5 	 2
 	 0 	 6 	 5 	 6
Need Values :
	 0	 0	 0	 0
	 0	 7	 5	 0
	 1	 0	 0	 2
	 0	 0	 2	 0
	 0	 6	 4	 2
 SS process 0
 SS process 2
 SS process 3
 SS process 4
 SS process 1
*/
