/*
 *  Checking Palindrome Numbers
 *  A palindrome number is a number that is same after reverse.
 *  for example 121, 34543, 343, 131, 48984
 *
 *  Md Atiqur Rahman
 *  Date: 16.09.2021
 *  -------------------------------
 */

#include <stdio.h>


int main()
{
    int aNum,newNum,rem,n;

    printf("\n\n   Enter an integer: ");

    scanf("%d",&aNum);

    n=aNum;

    while (n>0)
    {
        rem=n%10;
        newNum=newNum*10+rem;
        n=n/10;
    }
    printf("\n\n");

    if (newNum==aNum)
        printf("        %d is a Palindrome number --> %d",aNum,newNum);
    else
        printf("        %d is NOT a Palindrome number.",aNum);

    printf("\n\n");
    return 0;
}
