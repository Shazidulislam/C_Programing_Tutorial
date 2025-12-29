/*

!! Practice Question 40

??Write a function to calculate the sum , product & average
??of 2 numbers. print that average in the main function
??

*/

#include <stdio.h>
#include <math.h>

void doSomeWork(int a, int b, int *sum, int *prod, int *avg);

int main()
{
   
    int a =20 ;
    int b =25 ;

    int sum , prod , avg;
    doSomeWork(a ,b , &sum , &prod ,&avg);

    printf("sum of---> %d  \n prod of --> %d \n avg of ---> %d \n" , sum ,prod ,avg); 

    return 0;
}

void doSomeWork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}
