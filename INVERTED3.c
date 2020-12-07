//INVERTED PYRAMID STAR PATTERN//

#include <stdio.h>
int main() {
int x, y, z;
   for (x = 5; x >= 1; --x) 
   {
   for (z = 0; z < 5 - i; ++z)
   {
         printf("  ");
   }
      for (y = i; y <= 2 * x - 1; ++y)
      {
         printf("* ");
      }
      for (y = 0; y < x - 1; ++y)
      {
         printf("* ");
      }
      printf("\n");  
   }
    return 0;
}