// Finding Fibonacci Numbers
// Fibonacci series, next number is the sum of previous two numbers
// for example 0, 1, 1, 2, 3, 5, 8, 13, 21 etc.
// The first two numbers of Fibonacci series are 0 and 1.
// Md Atiqur Rahman
// Date: 16.09.2021
// -------------------------------
#include <stdio.h>
int main(){
    int n1=0,n2=1,n3, i, num;

    printf("\n\nEnter a number of elements: ");
    scanf("%d",&num);

    printf("\n\n   %d, %d,",n1, n2);
    for (i=2; i<num;++i)
    {
        n3=n1+n2;
        if (i==num-1){
            printf(" %d",n3);
        }else
            printf(" %d,",n3);


        n1=n2;
        n2=n3;
    }
    printf("\n\n");
    return 0;
}
/* #include<stdio.h>
 * int main()
 * {
 *  int n1=0,n2=1,n3,i,number;
 *  printf("\n\nEnter the number of elements:");
 *  scanf("%d",&number);
 *  printf("\n%d %d",n1,n2);//printing 0 and 1
 *  for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed
 *  {
 *   n3=n1+n2;
 *   printf(" %d",n3);
 *   n1=n2;
 *   n2=n3;
 *  }
 *  printf("\n\n");
 *   return 0;
 *  }
 */
