#include <stdio.h>
#include <time.h> // Needed to seed the random number generator
#include <stdlib.h>

/* TODO: populate an array with random integers */
/* int r = rand() */

/* array[element] = rand() % 100 + 1 */

void bubble_sort(int * a, int n) {
     int i, t, j = n, s = 1;
     while (s) {
          s = 0;
          for (i = 1; i < j; i++) {
               if (a[i] < a[i - 1]) {
                    t = a[i];
                    a[i] = a[i - 1];
                    a[i - 1] = t;
                    s = 1;
               }
          }
          j--;
     }
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