#include<stdio.h>
#include<math.h>

int main(){

    /*
     !!Functions
     !!block of code that performs particular task

     *Take Argument ---> DO Work     ---->Return Result

     ??it can be used multiple times
     ??increase code reusability
      

    */

    /*
     !! Syntax 1

    ?? Function Prototype
    ?? void printHello( );
    ?? Tell the compiler

    */

    /*
    !! Syntax 2
    
     ??Function Definition

     !!printf("Hello");
     !!void printHello() {
     
     !!}
     ?? > Do the Work
    */

    /*
     ?? Syntax 3
      !!Function Call
      ??int main() {
      !!printHello( );
      ??return 0;
      ??}
      
      *Use the Work
    */

    /*
     !!Properties
      *- Execution always starts from main
      *
      *- A function gets called directly or indirectly from main
      *
      *- There can be multiple functions in a program
    */

    /*
     !!Function Types
     ??1.---->Library function     ??2.---->User-defined
     
     ! Library function 
        *Special functions
        *inbuilt in C
        *scanf( ), printf( )

     !!User-defined
       *declared & defined by
       *programmer

    */

    /*
     !!Passing Arguments

     ??functions can take value & give some value

     *functions can take value --------->parameter

     *give some value ----------->return value
    */

    /*
     !!Passing Arguments
        *void printHello( );

        *void printTable(int n);

        *int sum(int a, int b);
    */

    /*
     !! Argument         v/s      Parameter
     *values that are -          Values in function
     * -passed in -              declaration & 
     *function call                definition


     *Used to send -               Used to receive
     *-Value.                         value

     *Actual                          formal parameters
     *-parameter

    */

    /*
    !!NOTE
    *a.function can only return one value at a time
    *b.Changes to parameters in functon don't change the values in calling function.


    !! Because a copy of argument is passed the function
    */

    /*
    !! Recursion
    ?? When a function calls itself, it's called recursion.

    */

    /*
       !!Properties of Recursion 
        *a. Anything that can be done with Iteration, can be done with
        * recursion and vice-versa.
        
        *Properties of Recursion
        
        *b. Recursion can sometimes give the most simple solution.
        
        *d. Iteration has infinite loop & Recursion has stack overflow
        
        *c. Base Case is the condition which stops recursion.
    */



}