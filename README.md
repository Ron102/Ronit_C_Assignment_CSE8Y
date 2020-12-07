# Ronit_C_Assignment_CSE8Y
C Assignment codes
**Write a C program to count number of digits in a number**
```
#include <stdio.h>
int main() {
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);

    while (n != 0) {
        n /= 10;     // n = n/10
        ++count;
    }

    printf("Number of digits: %d", count);
}
```
**Write a C program to swap first and last digits of a number**
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
```
```
**Write a C program to find frequency of each digit in a given integer**
#include <stdio.h>
#define BASE 10 /* Constant */

int main()
{
    long long num, n;
    int i, lastDigit;
    int freq[BASE];

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%lld", &num);

    /* Initialize frequency array with 0 */
    for(i=0; i<BASE; i++)
    {
        freq[i] = 0;
    }

    /* Copy the value of 'num' to 'n' */
    n = num; 

    /* Run till 'n' is not equal to zero */
    while(n != 0)
    {
        /* Get last digit */
        lastDigit = n % 10;

        /* Remove last digit */
        n /= 10;

        /* Increment frequency array */
        freq[lastDigit]++;
    }

    /* Print frequency of each digit */
    printf("Frequency of each digit in %lld is: \n", num);
    for(i=0; i<BASE; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;
}
```
```
**Write a C program to enter a number and print it in words**
#include <stdio.h>

int main()
{
    int n, num = 0;

    /* Input number from user */
    printf("Enter any number to print in words: ");
    scanf("%d", &n);

    /* Store reverse of n in num */
    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }

    /* 
     * Extract last digit of number and print corresponding digit in words
     * till num becomes 0
     */
    while(num != 0)
    {
        switch(num % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        num = num / 10;
    }

    return 0;
}
```
```
**Write a C program to print all ASCII character with their values**
#include <stdio.h>

int main()
{
    int i;

    /* Print ASCII values from 0 to 255 */
    for(i=0; i<=255; i++) 
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }

    return 0;
}
```
```
**Write a C program to find one's complement of a binary number**
#include <stdio.h>

#define SIZE 8

int main()
{
    char binary[SIZE + 1], onesComp[SIZE + 1];
    int i, error=0;
    printf("Enter %d bit binary value: ", SIZE);
    /* Input binary string from user */
    gets(binary);
    /* Store all inverted bits of binary value to onesComp */
    for(i=0; i<SIZE; i++)
    {
        if(binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(binary[i] == '0')
        {
            onesComp[i] = '1';
        }
        else
        {
            printf("Invalid Input");
            error = 1;
            /* Exits from loop */
            break;
        }
    }

    /* Marks the end of onesComp string */
    onesComp[SIZE] = '\0';

    /* Check if there are binary string contains no error */
    if(error == 0)
    {
        printf("Ones complement = %s", onesComp);
    }

    return 0;
}
```
```
**Write a C program to find two's complement of a binary number**
