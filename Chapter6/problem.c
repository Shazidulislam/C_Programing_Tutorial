
#include <stdio.h>
#include <math.h>

void callByReference(int *n);
void sawapValue(int a, int b);
void sawapReference(int *a, int *b);
int main()
{
    /*
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0; // x=0

    printf(" x = %d \n", x);
    printf(" *ptr =  %d \n", *ptr);


    *ptr+=5; // x = 5;
      printf(" x = %d \n", x); //5
    printf(" *ptr =  %d \n", *ptr);// 5

    (*ptr)++;
     printf("x = %d \n" , x);
     printf("ptr = %d \n" , *ptr);

     */
    /*
    !! Call by reference
    int n = 20;
    callByReference(&n);
    printf("CAll By Reference ----> %d \n" , n);

     */
    int a = 18;
    int b = 22;
    sawapValue(a, b);
    printf("main value of a---> %d \n", a);
    printf("main value b --> %d \n", b);

    sawapReference(&a, &b);
    printf("main Reference value of a---> %d \n", a);
    printf("main Reference value of b---->  %d \n", b);


return 0;
}

void callByReference(int *n)
{
    *n = *n + 10;
}

//!! practice question 38
/*
!! Swap 2 numbers , a & b.
?? Swap ----> mane inter change kora . mane a er value b te ber value ate nia jawa

*/

void sawapValue(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;

    printf("value of a---> %d \n", a);
    printf("value b --> %d \n", b);
}

// !!

void sawapReference(int *a, int *b)
{
    int t;
    int *ptr = &t;

    *ptr = *a;
    *a = *b;
    *b = *ptr;

    printf(" Reference value of a---> %d \n", *a);
    printf("Reference value of b---->  %d \n", *b);
}