//Write a C program to convert Binary to Hexadecimal number system//

#include<stdio.h>
#include<conio.h>
int main()
{
    int binnum, hex=0, mul=1, count=1, rem, i=0;
    char hexnum[20];
    printf("Enter any Binary Number: ");
    scanf("%d", &binnum);
    while(binnum!=0)
    {
        rem = binnum%10;
        hex = hex + (rem*mul);
        if(count%4==0)
        {
            if(hex<10)
                hexnum[i] = hex+48;
            else
                hexnum[i] = hex+55;
            mul = 1;
            hex = 0;
            count = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            count++;
        }
        binnum = binnum/10;
    }
    if(count!=1)
        hexnum[i] = hex+48;
    if(count==1)
        i--;
    printf("\nEquivalent Octal Value = ");
    for(i=i; i>=0; i--)
        printf("%c", hexnum[i]);
    getch();
    return 0;
}