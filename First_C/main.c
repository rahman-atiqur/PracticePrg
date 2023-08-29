// This is first time coding in C
// Checking of Prime number
// Md Atiqur Rahman
// Date: 14.09.2021
// -------------------------------

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("<<< Welcome to check Prime Number >>>\n\n\n");

    int i,num,flag=0;

    printf("Enter a positive integer number:");
    scanf("%d",&num);

    printf("\n\n");


    if (num==0)
          {
            printf("Please enter a positive integer.....\n\n\n");
            return 0;
         }

      //Checking prime or not

     for (i=2; i<=num/2; i++)
     {
         if (num%i==0)
         {
              flag=1;
              break;
          }
     }

    //message printing
     if (num==1)
     {
        printf("1 is either prime nor composite.");
     }
     else
     {
         if (flag==0)
        {
            printf("%d is a prime number.",num);
         }
         else
         {
              printf("%d is NOT a prime number.",num);
         }
     }




    printf("\n\n\n");

  // *** End of coding ****
    return 0;
}

