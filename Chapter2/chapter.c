// !!Instructions

//** */ These are statements in a Program

/*
Types 1.-->//?Type Declaration Instructions

Types-2 -->//?Arithmetic Instructions

Types-3 -->//?Control Instructions


*/

//!! Declaration Instructions Declare var before using it
/*

// ?? Instructions
//**VALID

int a = 22;
int b = a;
int c = b + 1;
int d = 1, e;

//**VALID
int a = 22;
int b = a;
int c = b + 2;
int d = 2, e;
//** Valid
int a,b,c;
a = b = c = 1;
//**INVALID
int olAge = 22;
int newAge = oldAge+Years;
int tears = 2;
//**  INVALID
int a,b,c = 1;
*/

// !!Arithmetic Instructions
//* In Arithmetic How many oparetor
/*+ , - , * , / , %
//** VALID
a=a+b;
a=b*c;
a=b/c;
//*  INVALID
b+a = a;
a= bc;
*a=b^c;

!! NOTE - pow(x,y) for x to the power y
*/

#include <stdio.h>
// ??Whene caculate pow(b,c) then i use it
#include <math.h>
int main()
{
    // !!Declaration Instructions
    // int a = 22;
    // int b = a;
    // int c = b * 2;
    // int d = 1, e;

    // !!Arithmetic Instructions
    // int y,z;
    // y=z=2;
    //  int x = y+z;
    //  int w= y*z;
    //  int v = w/x;
    //  !! NOTE - pow(x,y) for x to the power y
    int b, c;
    b = c = 2;
    int power = pow(b, c);
    printf("The sqire of 2  %d \n", power);
    /*
     !!Modular Operator %

    !! Returns remainder for int

     3 % 2 = 1

     -3 % 2 = -1
     5 % 2 = 1
     ^% 3 = 0
     12%10 =2
    */
    //??Modular Operator  flot valute kaj kore na
    printf("%d", 16 % 10);

    /*
    !!Arithmetic Instructions

    *Type Conversion

    int   op   int  === int

    int   op   float  === float

    float   op   float  === float

    */

    /*
     !!Arithmetic Instructions

     *Operator Precedence


     ?  *, /, % ,+ ,-       x = 4 + 9 * 10
    !! Associativity (for same precedence)
     !!Left to Right

     x = 4*3 / 6*2

    */
    int x = 4 * 3 / 6 * 2;

    printf("\n this your result %d ", x);

    /*
    Instructions Control
     Instructions Used to determine flow of program
      *a. Sequence Control
      *b. Decision Control
      *c. Loop Control
      *d. Case Control


      !!Control Instructions

      👉 Control Instructions ব্যবহার করা হয় program এর flow determine করার জন্য
         (মানে program কোন পথে চলবে, কোন statement কখন execute হবে)

        ?? a.Sequence Control

        👉 Statement গুলো line by line, উপরের থেকে নিচে execute হয়
        👉 কোনো condition বা loop নাই

         int a = 5;
        int b = 10;
        int c = a + b;


        ?? b. Decision Control

        👉 condition অনুযায়ী decision নেয়
        👉 true হলে এক কাজ, false হলে অন্য কাজ

        Keywords: if, if else, else if, switch
        if (a > b)
            printf("a বড়");
        else
            printf("b বড়");


        ?? c. Loop Control

        👉 একই কাজ বারবার করার জন্য ব্যবহার হয় 🔁
        Keywords: for, while, do while
        for(int i = 1; i <= 3; i++)
        printf("Hello\n");


        ??d. Case Control

        👉 একাধিক option থেকে একটা case select করার জন্য
        Keyword: switch

        switch(day) {
            case 1: printf("Sunday"); break;
            case 2: printf("Monday"); break;
            default: printf("Invalid");
        }
    */

    /*
     !! Operators
     a. Arithmetic Operators //!! + , - , / , % , *
     
     b. Relational Operators  //* shamne porano hobe
     
     d. Bitwise Operators   //* shamne porano hobe
     c. Logical Operators   //* shamne porano hobe
     
     e. Assignment Operators  //* shamne porano hobe
     
     f. Ternary Operator       //* shamne porano hobe nex chapter e
    */

    //!!Relational Operators 

    /*
    !!Relational operators are used to compare two values and return true or false.



               🔹 List of Relational Operators 
           Operator	Meaning	Example
           >	বড়	                    a > b
           <	ছোট                     a < b
           >=	বড় বা সমান	            a >= b
           <=	ছোট বা সমান	            a <= b
           ==	সমান কিনা	             a == b
           (!=	সমান না	                 a != b)
    */

    // printf("relational Oparetors start here: \n  4==4 %d  " , 4==4);
    // printf(" \n %d 4==3 " , 4==3);
    // printf(" \n %d 4>3" , 4>3);
    // printf(" \n %d  4<3" , 4<3);
    // printf(" \n %d  4<=3" , 4<=3);
    // printf(" \n %d 4<=4  " , 4<=4);
    // printf(" \n %d 4>=3" , 4>=3);
    // printf(" \n %d 3>=3" , 3>=3);
    // printf(" \n %d 4!=3" , 4!=3);
    // printf(" \n %d 4!=4" , 4!=4);



    // !! Logical Oparetor
    /*

    Operators

&& AND

|| OR

! NOT
    
    */

    // !! AND Oparetor
    printf(" \n AND operator  %d", 5>2&&5<3 );
    printf(" \n AND operator  %d", 5>2&& 2<3 );
    printf(" \n OR operator  %d", 5>2|| 2<3 );
    
    printf(" \n NOT operator  %d", !(4>5) );
    printf(" \n NOT operator  %d", (4>5) );

    /*
    !!Operator Precendence
    */
    

    return 0;
}