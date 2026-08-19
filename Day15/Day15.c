// Print Fibonacci Series:

#include <stdio.h>

void fibonacci(){

    int n;

    printf("Enter a range to print fibonacci series:\n");
    scanf("%d",&n);

    int f1 = 0;
    int f2 = 1;
    int f3 = f1 + f2;

    printf("Here comes the fibonaaci series:\n %d\n %d\n", f1, f2);

    for( int i = 0; i < n; i++)
    {

        int f3 = f1 + f2;

        printf("%d\n",f3);

        f1 = f2;
        f2 = f3;
    }


}

// Program to Perform Swapping of Two Numbers:
// Write a program to swap two numbers entered by the user. For example:

// Input: Enter first number: 10, Enter second number: 20
// Output:
//     Before swapping: a = 10, b = 20
//     After swapping: a = 20, b = 10

void swap(){

    int a, b, temp;

    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);

    temp = a;
    a = b;
    printf("after swapping: a= %d, b=%d",temp,a);


}

void main(){
    fibonacci();
    swap();
}