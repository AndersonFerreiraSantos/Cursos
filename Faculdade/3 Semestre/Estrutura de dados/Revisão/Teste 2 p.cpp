#include <iostream>
#include <stdlib.h>

int main() {
   int 
   num_1, 
   num_2, 
   resultA,
   resultB,
   resultC,
   resultD;
   
   num_1 = 2;
   num_2 = 2;
   
   resultA = num_1 + num_2;
   resultB = num_1 - num_2;
   resultC = (num_1 * 2) + (num_2 * 3);
   resultD = num_1 * num_2;
   
   printf("A: %i\n", resultA);
   printf("B: %i\n", resultB);
   printf("C: %i\n", resultC);
   printf("D: %i\n", resultD);
}
