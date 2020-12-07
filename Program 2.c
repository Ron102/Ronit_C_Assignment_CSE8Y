//Write a C program to swap first and last digits of a number//

#include <stdio.h>
#include <math.h>

int main()
{
    int n,firstNum, lastNum,digits, swapDigit;

    printf("Enter number = ");
    scanf("%d", &n);

    //Find last digit of a number
    lastNum = n % 10;

    //Find total number of digits - 1
    digits    = (int)log10(n);

    //Find first digit
    firstNum = (int) (n / pow(10, digits));


    swapDigit  = lastNum;
    swapDigit *= (int) round(pow(10, digits));
    swapDigit += n % ((int)round(pow(10, digits)));
    swapDigit -= lastNum;
    swapDigit += firstNum;

    printf("Number after swapping first and last digit: %d", swapDigit);

    return 0;
}