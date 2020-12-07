//HOLLOW INVERTED PYRAMID STAR PATTERN//
#include <stdio.h>
int main() {
int x, y;
    for(x=1; x<=5; x++)
    {
        for(y=1; y<i; y++)
        {
            printf(" ");
        }
        for(y=1; y<=(10 - (2*x-1)); y++)
        {
            if(x==1 || y==1 || y==(10 - (2*x - 1)))
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
