//write a program to sort an array

#include <stdio.h>

//ascending order
void sort_array(){

    // int n,
    int arr[5];

    // printf("Enter how many values you want to input in the array: ");
    // scanf("%d\n",&n);


    printf("Input the values of the Array:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d\n",&arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Here are the elements of the array : ");
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
}

//descending order
void sort_array2(){

    // int n,
    int arr[5];

    // printf("Enter how many values you want to input in the array: ");
    // scanf("%d\n",&n);


    printf("Input the values of the Array:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d\n",&arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Here are the elements of the array : ");
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
}

//program to find a number from an array

void search(){
    
    int target_el;
    int arr[5] = {20, 14, 18, 45, 93};
    int found;

    printf("enter a value you want to search from an array: ");
    scanf("%d",&target_el);

    for ( int i = 0; i < 5; i++)
    {
        if ( arr[i] == target_el)
        {
            found = 1;
        }

        if (found == 1)
        {
            printf("element found\n");
            break;
        }

        else{
            printf("element not found\n");
        }
    }
}

//find the  second largest element

void sec_largest(){

    int a[5];
    int largest;
    int sec_largest;
    int i;


    printf("enter array values :\n");  // takes 5 values from user

    for ( i = 0; i < 5; i++)
    {
        scanf("%d\n",&a[i]);
    }

    largest = a[0];
    sec_largest = a[0];

    for ( i = 1; i < 5; i++)
    {
        if ( a[i] > largest)
        {
            sec_largest = largest;
            largest = a[i];
        }
          else {
        if (a[i] > sec_largest && a[i] != largest)
        {
            sec_largest = a[i];
        }
    }
    }

    printf("Here is the largest value : %d\n",largest);
    printf("here is the second largets value : %d\n",sec_largest);

}

void main(){
    sec_largest();
}