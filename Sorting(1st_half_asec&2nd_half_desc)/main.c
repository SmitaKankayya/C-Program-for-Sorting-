//
//  main.c
//  Sorting(1st_half_asec&2nd_half_desc)
//  Created by Smita Kankayya on 28/03/24.
//
//Write a Program to sort First half in Ascending order and the Second in Descending order.

#include <stdio.h>

void Sort_asc_desc(int arr[],int n) {
    
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for ( int j = i + 1; j< n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n/2; i++)       // printing first half in ascending order
        printf("\t%d", arr[i]);
    
    for (int j = n - 1; j >= n/2; j--)         // printing second half in descending order
        printf("\t%d", arr[j]);
}
int main(void)
{
    int arr[] = { 11, 23, 42, 16, 83, 73, 59 };
        int N = sizeof(arr) / sizeof(arr[0]);
      
        Sort_asc_desc(arr, N);
    return 0;
}
