// Program to Calculate the Square and Cube of a Number:
// Write a program where the user enters a number, and the program calculates its square and cube. For example:
// Input: Enter a number: 3
// Output: Square: 9, Cube: 27

#include <stdio.h>

int main()
{
    int a;

    //value isnt initialized at here first
    // int square = a*a;
    // int cube = a*a*a;


    printf("Enter a number to view its square and cube:");
    scanf("%d",&a);

    int square = a*a;
    int cube = a*a*a;

    if( a == 0)
    {
        printf("enter a valid number");
    }

    else
    {
        printf("Square: %d\ncube: %d\n", square , cube);
    }
    
    return 0;


}

// Program to Calculate the Area of a Circle and Triangle:
// Write a program to calculate the area of a circle given its radius and a triangle given its base and height. For example:
// Input: Radius: 5, Base: 10, Height: 4
// Output:
// Area of Circle: 78.5
// Area of Triangle: 20

#include <stdio.h>

int main()
{
    int radius;
    int base;
    int height;

    printf("enter the radius:");
    scanf("%d",&radius);
    printf("enter the base:");
    scanf("%d",&base);
    printf("enter the height:");
    scanf("%d",&height);

    // printf("Enter the radius of a circle : %d\nEnter the Base of a triangle : %d\nEnter the Height of the triangle: %d");
    // scanf(&radius,&base,&height);

    //use double instead of float

    double area_of_circle = 3.147 * radius * radius;
    double area_of_triangle = 0.5 * base * height;

    printf("The area of the circle is : %f\nThe area of the Triangle is : %f\n", area_of_circle,area_of_triangle);

    return 0;
}


// Write a Program to Find the Quotient and Remainder of Two Integers:
// Write a program where the user enters two integers (divisor and dividend) and calculates their quotient and remainder. For example:
// Input: Dividend: 22, Divisor: 7
// Output:
// Quotient: 3
// Remainder: 1

#include <stdio.h>

int main()
{
    int dividend;
    int divisor;

    printf("Enter a Dividend: ");
    scanf("%d",&dividend);
    printf("enter a Divisor: ");
    scanf("%d",&divisor);

    int remainder = dividend % divisor;
    printf("The remainder is : %d\n",remainder);


    int quotient = (dividend - remainder) / divisor;
    printf("the Quotient is : %d\n", quotient);

    return 0;
}