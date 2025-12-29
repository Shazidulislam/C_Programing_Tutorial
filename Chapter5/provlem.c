

#include <stdio.h>
#include <math.h>

int calculateResult(int science, int bangla, int math);
int fib(int n);
int sumOfDegist(int n);
float squareRoot(float n);
int main()
{
    int bangla = 98;
    int math = 95;
    int science = 90;
    int n=25;
    
    // printf("The avarage of result :  %d \n", calculateResult(science, bangla, math));
    // for(int i=0; i<=n ; i++){
    //      printf("The value of fibanacci--> %d \n" , fib(i));
    // }

    printf("Sum of n degist %f \n" , squareRoot(n));

    
    return 0;
}

int calculateResult(int science, int bangla, int math)
{
    return ((science + bangla + math) / 3);
}

//!! Question 34
// !!! Write a function to print n terms of the fibonacci sequence.
/*
*Fibonacci sequence হলো এমন একটা number series
*যেখানে প্রতিটা সংখ্যা আগের দুইটা সংখ্যার যোগফল।


!! ---> 0 ,1 ,1 ,2 ,3 ,5 ,8 ,13 ,21.....

*0+1 =1
*1+1 =2
*1+2 =3
*2+3 =5
*3+5 =8
*5+8 =13
*.......

!! F(n) = F(n-1) + F(n-2)

*/

int fib(int n)
{
    // base case
       if(n==0){
        return 0;
       }
       if(n==1){
        return 1;
       }
    // int fibNm1 = fib(n - 1);
    // int fibNm2 = fib(n - 2);
    // int fibN = fibNm1 + fibNm2;
    // printf("Fib of  is : %d \n",  fibN);
    return fib(n-1)+fib(n-2);
}

/*
 !! Homework Set
 *Write a function to find sum of digits of a number.
 
 *Write a function to find square root of a number
 
 * Write a function to print "Hot" cr "Cold" deoenden on the temperature user enter.
  
 *Make your own pow function
 
*/

//!! Write a function to find sum of digits of a number.

int sumOfDegist(int n){
     int sum =0;
    for(int i =1; i<=n ; i++){
        sum+=i;
    }
    return sum;
}
// !! Write a function to find square root of a number

float squareRoot(float n)
{
    return sqrt(n);
}