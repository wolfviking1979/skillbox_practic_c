#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

bool isAscending(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        } 
    }
    return true; 
}

void transformArray(int arr[], int size) {
    if (isAscending(arr, size)) {
        for (int i = 0; i < size; i++) {
            if (arr[i] > 0) {
                arr[i] = 0;
            }
        }
    }
}

int main(void) {
    
   int X[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int Y[SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
   transformArray(X, SIZE);
   transformArray(Y, SIZE);

   printf("Массив X: ");
   for (int i = 0; i < SIZE; i++) {
        printf("%d ", X[i]);
   }

   printf("\n");

   printf("Массив Y: ");
   for (int i = 0; i < SIZE; i++) {
        printf("%d ", Y[i]);
   }
   printf("\n");
   return 0;
}
