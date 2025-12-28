

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

!! void mane ei function tumar kaj kore dibe kinto kono result return korbe na.


*/

/*
!! Syntax 2

 ??Function Definition


 !!void printHello() {
    *printf("Hello");
 !!}
 ?? > Do the Work
*/

/*
 !! Syntax 3
  !!Function Call
  ??int main() {
  *printHello( ); // use the declar function
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

Recursion মানে খুব সিম্পলভাবে বললে 👇

👉 **যখন কোনো function নিজের ভিতর থেকে নিজেকেই আবার call করে, সেটাকেই recursion বলে।**

আরেকটু easy করে বুঝো 😄
ধরো তুমি সিঁড়ি দিয়ে নিচে নামছো। প্রতিটা ধাপে একই কাজ করছো—এক ধাপ করে নামা। যতক্ষণ না নিচে পৌঁছাচ্ছো, ততক্ষণ কাজটা repeat হচ্ছে।
এই repeat হওয়াটাই recursion-এর আইডিয়া।

### Recursion-এর ২টা main part থাকে:

1️⃣ **Base case**
👉 যেখানে recursion থামে, না হলে infinite চলতেই থাকবে 😵

2️⃣ **Recursive call**
👉 function নিজের কাজটা আবার নিজেকেই দিয়ে করায়

### ছোট একটা উদাহরণ (concept বুঝার জন্য):

ধরো factorial বের করা

* 5! = 5 × 4!
* 4! = 4 × 3!
* 3! = 3 × 2!
* 2! = 2 × 1!
* 1! = 1  ← এখানেই base case

### সহজ ভাষায়:

📌 **Recursion = একই কাজ বারবার করা, কিন্তু function নিজেই নিজেকে call করে, আর একটা stopping point থাকে।**



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

/*
#include<stdio.h>
#include<math.h>

//!! declaration/function prototype
void printHello();
void printGoodbye();
void printMeet();
int main(){
   printHello();
   printGoodbye();
   printMeet();
    return 0;
}

//!! create a function
void printHello(){
    printf("Hello world...\n");
}

//!! question 27----> Write 2 function one to print "Hello " & second
//!! to print "good bye"
void printGoodbye(){
     printf("Good Bye.......\n");
}

//!! question 28 ----> write a function that prints Assalamulaikum if user is Bangladesh & Bonjor if the use is French.

void printMeet(){
    char salam ;
    printf("Enter b for Bangladesh  & f for French : ");
    scanf("%s",&salam);

    if(salam=='b'){
        printf("Assalamulaikum...\n");
    }else{
        printf("Bonjour......\n");
    }

}
    */

/*

#include<stdio.h>
#include<math.h>
int sumCalculate(int a , int b);
//!!  print a table for N
void printTable(int n);
int main(){
int a , b;
int n;
printf("Enter value for N ");
scanf("%d" , &n);
printf("Enter first number : ");
scanf("%d" , &a);
printf("Enter second Number : ");
scanf("%d" , &b);
// funtion declaration
int sum = sumCalculate(a ,b);
printf("Sum of a and b  %d \n" , sum);
//printTable
printTable(n);
return 0;
}

int sumCalculate(int a , int b){
return a+b ;
}

//
void printTable(int n){
for(int i=n; i>=1 ; i--){
printf("The value of print table--> %d \n" , i );
}
}



*/

#include <stdio.h>
#include <math.h>

void calculatePrice(float price);
int calculateSquare(int a);
float calculateCircle(int r);
int calculateRectangle(int l , int b);

void printW(int count);


int main()
{
    /*
    float price ;
    printf("Enter Product Price : ");
    scanf("%f" , &price);
    calculatePrice(price);

    */
   
    //!!Practice Question 29
    //!! Use Library function to calculate the square of a number given by user.
 
    // int n;
    // printf("Enter the value : ");
    // scanf("%d" , &n);
    // int square = pow(n,2);
    // printf("square : %d \n" , square);

    // int square = calculateSquare(10);
    // printf("square value : %d \n" , square);
    // float circle = calculateCircle(4);
    // printf("Cicle arear :  %f \n" , circle);
    // int rectangle = calculateRectangle(4,6);
    // printf("rectangle area : %d \n" , rectangle);

     printW(10);

    return 0;
}



void calculatePrice(float price)
{
    price = price + (0.18 * price);
    printf("Product price : %f \n", price);
}

//!! Question 30 -->
//!! Write function to calculate area of a square , a circle & a rectangle;

int calculateSquare(int a){
    return a*a;
}

float  calculateCircle(int r){
    return r*3.1416;
}

int calculateRectangle(int l ,int b){
    return l*b;
}


//!! Recursion  
void printW(int count){
    if(count == 0){
        return ;
    }
    printf("Hello World....\n");
    printW(count-1);
}

//!! Recursion in Math
//!! f(x)=x^2

//!! Recursion function mane holo function nije nije ke repetly call kore bar bar

//practice 30//!! Sum of first n natural numbers.
//* n-->1+2+3+4+5+................n-1+n
//??Sum(n-1)+n


