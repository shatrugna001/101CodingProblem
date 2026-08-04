// Program to Check Whether the Number is Odd or Even:
// Write a program that checks whether a number entered by the user is odd or even. For example:
// Input: Enter a number: 7
// Output: 7 is an odd number

#include <stdio.h>

int main()
{
    int a;

    printf("Input a number:");
    scanf("%d",&a);

    if ( a % 2 == 0 )
    {
        printf("number is even");
    }

    else {
        printf("number is odd");
    }

    return 0;
}



// Program to Check Whether the Number is Divisible by 5:
// Write a program that determines if a number entered by the user is divisible by 5. For example:
// Input: Enter a number: 25
// Output: 25 is divisible by 5.

#include <stdio.h>

int main()
{
    int a;

    printf("enter a number: ");
    scanf("%d", &a);

    if(a % 5 == 0)
    {
        printf("it is divisible by 5");
    }

    else
    {
        printf("it is not divisible by 5");
    }

    return 0;
}


// Program to Check Whether the Number is a Multiple of 7:

// Write a program that verifies if a number entered by the user is a multiple of 7. For example:

// Input: Enter a number: 14
// Output: 14 is a multiple of 7.

#include <stdio.h>

int main()
{
    int a;

    printf("enter a number: ");
    scanf("%d", &a);

    if(a % 7 == 0)
    {
        printf("it is multiple of 7");
    }

    else
    {
        printf("it is a not multiple of 7");
    }

    return 0;
}