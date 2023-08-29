/*
 *  Finding Armstrong Numbers
 *  Armstrong number is the sum of n th power of individual digits of the number; n=no of digits.
 *  for example 153=(1^3)+(5^3)+(3^3)=1+125+27=153
 *              1634=(1^4)+(6^4)+(3^)+(4^4)=1+1296+81+256=1634
 *
 *  Md Atiqur Rahman
 *  Date: 16.09.2021
 *  -------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i, j, num1, num2, temp, num, nDigit, rem, sumRem;

    printf("\n\nEnter two numbers range with interval: ");
    scanf("%d %d", &num1, &num2);

    //swap number if num1>num2
    if (num1>num2)
    {
        temp=num1;
        num1=num2;
        num2=temp;
    }

    printf("\n\n");
    printf("          Armstrong Numbers are:\n");

    j=0;
    // starting iteration for the range
    for (i=num1; i<=num2; i++)
    {
        //no of digits count
        num=i;
        nDigit=0;
        while (num!=0)
        {
            num=num/10;  //num/=10
            nDigit++;
        }
        //---------------------

        //summation of nDigit power of individual digits of the number
        num=i;
        sumRem=0;
        while (num!=0)
        {
            rem=num%10;
            sumRem+=pow(rem,nDigit);
            num=num/10;
        }
        //---------------------------------

        //Check number is equal to the sum of n th power of individual digits of the number; n=no of digits

        if (sumRem==i)
        {
            printf("\n          %d. --- %d",++j,i);
        }
        //---------------------------

    }  // End of for loop

    printf("\n\n");

    //End of program
return 0;
}



/*
int main()
{

int low, high, number, originalNumber, rem, count=0;
  double result=0.0;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &low, &high);
  printf("\n\nArmstrong numbers between %d and %d are: ", low, high);


 //  swap numbers if high < low

 //  low=2000 high=200
 //  high=200+2000=2200
 //  low =2200-2000=200
 //  high=2200-200=2000

// temp=high 200
// high=low 2000
// low=temp 200


  if (high < low) {
    high += low;
    low = high - low;
    high -= low;
  }


  // iterate number from (low + 1) to (high - 1)
  // In each iteration, check if number is Armstrong
  for (number = low ; number <=high; ++number) {

    originalNumber = number;

    // number of digits count
    while (originalNumber != 0) {
      originalNumber /= 10;
      ++count;
    }
    originalNumber = number;

    // result contains sum of nth power of individual digits
    while (originalNumber != 0) {
      rem = originalNumber % 10;
      result += pow(rem, count);
      originalNumber /= 10;
    }

    // check if number is equal to the sum of nth power of individual digits
    if ((int)result == number) {
      printf("%d ", number);
    }

    // resetting the values
    count = 0;
    result = 0;

  }
   printf("\n\n");
    return 0;
}
*/
