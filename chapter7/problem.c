#include <stdio.h>
#include <math.h>

int countOddNumber(int arr[], int n);
void reverseArray(int arr[], int n);
void printArr(int arr[] , int n);
int main()
{

    /*
    !! Queston 41
    *Write a program to enter price of 3 items & print their final cost with gst

    */

    /*
    float items[3];

    printf("Enter items 1 : ");
    scanf("%f" , &items[0]);

    printf("Enter items 2 : ");
    scanf("%f" , &items[1]);

    printf("Enter items 3 : ");
    scanf("%f" , &items[2]);

    printf("Total price 1 : %f \n" , items[0]+(0.18*items[0]));
    printf("Total price 2 : %f \n" , items[1]+(0.18*items[1]));
    printf("Total price 3 : %f \n" , items[2]+(0.18*items[2]));
    */

    /*
    !! Practice Question 42
    !! Write a function to count the number of odd number in an array

    int array[] = {12, 11, 23, 45, 34};
    int n= 5;
     printf("%d \n" , countOddNumber( array, n));
    */

    /*
    !! Practice Qs
    !! int arr[] = {1,2,3,4 ,5}
    *For the given array, what will the following give?
    ?a . *(arr+2)


    ?b . *(arr+5)

    int arr[] = {12, 11, 23, 45, 34};
    printf("%d \n" ,  *(arr+2));
    printf("%d \n" ,  *(arr+5));
    */
    /*
    Qs 44
    !! Write a function to reverse an array
    for(int i=0; i<n/2;i++){
    fastValue = arr[i];
    secondValue = arr[n-i-1];
    arr[i]=secondvalue;
    arr[n-i-1] = fastValue;

    }
    */
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    // int n = sizeof(arr[0]);
    for(int i =0;i<n;i++){
        printf("Orginal %d \n" , arr[i]);
    }
    reverseArray(arr ,n);
    printArr(arr ,n); 
     for(int i =0;i<n;i++){
        printf("Reverse %d \n" , arr[i]);
    }
    return 0;
}

int countOddNumber(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }

    return count;
}

//!! reverse array

void printArr(int arr[] , int n){
   for(int i =0; i<n; i++){
    printf("%d \n" , arr[i]);
   }
}

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int fastVal = arr[i];
        int secVal =arr[n-i-1];
        arr[i]=secVal;
        arr[n-i-1]=fastVal;
    };
}
