// #include <stdio.h>

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }

// Program to Print Integer Numbers Entered by the User:

// Write a program where the user is asked to enter an integer number, and the program prints that number back to them. For example:

// Input: 42
// Output: You entered: 42

// #include <stdio.h>

// int main()
// {
    
//     int num;

//     printf("enter a number : ");
//     scanf("%d",&num);

//     printf("The entered num was :%d", num);
 
//     return 0;
// }

// Write a Program to Find the Size of int, float, double, and char on Your Computer:

// Write a program that displays the size of fundamental data types (int, float, double, and char) on your system. For example:

// #include <stdio.h>

// int main ()
// {
//     printf("The size of int :" "%zu\n",sizeof(int));
//     printf("The size of float :" "%zu\n",sizeof(float));
//     printf("The size of char :" "%zu\n",sizeof(char));
//     printf("The size of double :" "%zu\n",sizeof(double));

//     return 0;
// }

// Program to Find the Larger Number Among Two Numbers:

// Write a program to compare two integers entered by the user and print the larger one. For example:

#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("enter a number a:");
    scanf("%d",&a);

    printf("enter a number b:");
    scanf("%d",&b);

    if(a>b){

    printf("a is greater than b");
    }

    else {
    printf("b is greater");
    }
    return 0;
}