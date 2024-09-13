// C program to concatenate two arrays to a single array
#include <stdio.h>
#include <stdlib.h>

int* concatenateArrays(int arr1[], int n1, int arr2[],int n2) {
 
      // Allocating array for storing result
      int *res = (int *)malloc((n1 + n2) * sizeof(int));
 
    // Copy elements of the first array to the result array
    for (int i = 0; i < n1; i++)
        res[i] = arr1[i];

    // Copy elements of the second array to the result array
    for (int i = 0; i < n2; i++)
        res[n1 + i] = arr2[i];
 
      return res;
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {0, 2, 4, 6 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Concatenate the two arrays
    int *res = concatenateArrays(arr1, n1, arr2, n2);
   
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", res[i]);

    return 0;
}