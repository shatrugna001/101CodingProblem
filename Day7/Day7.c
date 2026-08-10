//creating an array , taking input from the user and printing it 

#include <stdio.h>

void main()
{
    // int arr[5];

    // printf("enter 5 values so that i can return them: \n");

    // for (int i = 0; i < 5; i++)
    // scanf("%d",&arr[i]);

    // printf("here are the elements: \n");

    // for (int i = 0; i < 5; i++)
    // printf("here are your inputs: %d\n",arr[i]);

    // Find the largest element.

    int arr[5];

    printf("enter 5 values so that i can return them: \n");

    for (int i = 0; i < 5; i++)
    scanf("%d",&arr[i]);

    int largest = arr[0];

    for (int i = 0; i < 5; i++)
    if (largest < arr[i]) {
        largest = arr[i];
    }

    else {
        largest = arr[0];
    }

    printf("%d here is the largest ",largest);

     

}