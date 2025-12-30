
#include <stdio.h>
#include <math.h>

void reverseArray(int arr[], int n);
void printArray(int arr[], int n);

int main()
{

    // int arr[] = {1,2,3,4,5,6,7};
    // int n= 7;

    // reverseArray(arr , n);

    // printArray(arr , n);

  

    /*

    */

    return 0;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
}

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstValue = arr[i];
        int secondValue = arr[n - i - 1];
        arr[i] = secondValue;
        arr[n - i - 1] = firstValue;
    }
}