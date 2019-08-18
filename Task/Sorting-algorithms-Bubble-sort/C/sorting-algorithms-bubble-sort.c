#include <stdio.h>
#include <time.h> // Needed to seed the random number generator
#include <stdlib.h>

/* TODO: populate an array with random integers */
/* int r = rand() */

/* array[element] = rand() % 100 + 1 */

void swap(int*, int*);

void bubble_sort(int * a, int n) {
     // s -- continue boolean
     // j -- a window that shrinks from the array size down to 1. when it reaches 1, the array is sorted
     // i -- counts up to the current window size
     // t -- the swap placeholder
     int i, t, j = n, s = 1;
     // while maybe needs sorting
     while (s) {
          s = 0;

          // for up to window height
          for (i = 1; i < j; i++) {
               // Comparison
               if (a[i] < a[i - 1]) {
                    /* t = a[i]; */
                    /* a[i] = a[i - 1]; */
                    /* a[i - 1] = t; */

                    swap(&a[i], &a[i - 1]);

                    // If a swap has taken place in the window then we should run the bubble sort again just in case there is another to be sorted
                    s = 1;
               }
               // The value at the top of the window is now the greatest
          }
          j--;
     }
}

//Swap function definition
void swap(int *a, int *b) {
     int t;

     t  = *b;
     *b = *a;
     *a = t;
}

int main() {
     // This will produce the same random numbers during the same second
     srand(time(NULL));   // Initialization, should only be called once.

     /* int a[] = {4, 65, 2, -31, 0, 99, 2, 83, 782, 1}; */
     int size = 10;
     int * elements = malloc(sizeof(int) * size);

     // inizialize
     for (int i = 0; i < size; ++i)
          elements[i] = i;

     for (int i = size - 1; i > 0; --i) {
          // generate random index
          int w = rand() % i;
          /* printf("%d",(int)rand()); */
          // swap items
          int t = elements[i];
          elements[i] = elements[w];
          elements[w] = t;
     }
     printf("\n");

     // int size = sizeof elements / sizeof elements[0];
     int i;
     for (i = 0; i < size; i++)
          printf("%d%s", elements[i], i == size - 1 ? "\n" : " ");
     bubble_sort(elements, size);
     for (i = 0; i < size; i++)
          printf("%d%s", elements[i], i == size - 1 ? "\n" : " ");
     return 0;
}