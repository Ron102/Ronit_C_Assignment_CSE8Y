//HOLLOW PYRAMID STAR PATTERN//

#include <stdio.h>
int main() {
  int x, y;
    for(x=1; x<=5; x++)
    {
        for(y=i; y<5; y++)
        {
            printf(" ");
        }
        for(y=1; y<=(2*x-1); y++)
        {
            if(x==5|| y==1 || y==(2*x-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");                                       
            }
        }
            printf("\n");                                
        }
    return 0;
}
