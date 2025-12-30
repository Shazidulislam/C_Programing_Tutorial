/*
  !! Qs 45
  !1 Write a program to store the first n fibsonacci numbers.
  nth = (n-1)+(n-2)
  */
#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    printf("Enter N value : ");
    scanf("%d", &n);
    /*
     int fib[n];
     fib[0] =0;
     fib[1] =1;

     for(int i=2; i<n ;i++){
         fib[i] = fib[i-1]+fib[i-2];

         printf("%d \t" ,fib[i] );
     }
 */

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = fib(i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}