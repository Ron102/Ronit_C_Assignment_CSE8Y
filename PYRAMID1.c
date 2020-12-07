//PYRAMID STAR PATTERN//
#include <stdio.h>
int main() {
int x, y,z;
   for (x = 1; x <=5; x++,k=0)
   {
      for (y = 1; y <=5 - x; y++)
      {
         printf("  ");
      }
      while (z != 2 * x - 1)
      {
         printf("* ");
         z++;
      }
      printf("\n");
   }
    return 0;
}