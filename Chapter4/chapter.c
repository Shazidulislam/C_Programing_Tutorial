#include <stdio.h>
#include <math.h>
//!! Chapter 3 talking about loop.

//!!Loop Control Instructions
int main()
{

    /*
     //** Loop 3 types er hoi thake.
     ?? For loop
     ?? While loop
     ?? do While loop
    */

    // for(int j =1 ; j<=20; j++){
    // //  printf("This is For loop %d \n" , j);
    // }

    // for(int i =10 ;i>=1 ; i--){
    //     // printf("for loop start here %d \n" , i);
    // }

    // // !! Print the Numbers from 0 to 10
    // for(int i=0; i<11 ; i++){
    //     // printf("Number %d \n" , i);
    // }

    /*
    !!Loop counter can be float
    !or even character
    */

    //!! Foat
    // for(float i =1.230; i <=20.230 ; i++){
    //     // printf("Loop control can be  float :  %f \n" , i);
    // }

    //!! Character
    // for(char i = 'a';i<='k' ; i++){
    //     // printf("Character printf : %c \n" , i);
    // }

    /*
    !!while Loop



      ??while(condition) {
     ??do something

     ?? }

    */
    //  int i =0;
    //  while (i<=10){
    //     // printf("While Loop %d \n" , i);
    //     i++;
    //  }

    //  int n;
    //  printf("Enter the value N : ");
    //  scanf("%d" , &n);
    //  int i=0;
    //  while (i<=n){
    //     printf("User Given Input : %d \n" , i);
    //     i++;
    //  }

    /* code */

    // !! Do While Loop

    // int i =0;
    // do
    // {
    //     printf("This is do while loop  %d \n" , i);
    //     i++;
    // } while (i<=10);

    //!! Print the sum of First n Natural Numbers
    /*
            int n;
            printf("Enter Your Number : ");
            scanf("%d" , &n);
            int i=1;
            int sum =0;
            do
            {
               sum=sum+i;
               i++;
            } while (i<=n);
              printf("Sum od While nutural Numbers : %d \n" , sum);

              int sumS =0;
              for(int j=1;j<=n;j++){
                sumS +=j;
              }
               printf("Sum FOR nutural Numbers : %d \n" , sumS);

               for(int k =n; k>=1;k--){
                printf("Reverse Loop %d \n" ,k);
               }


         }*/

    //!! Practice question 6--> Print the table of a number input by the user

    //  int n;
    //  printf("Enter your Number : ");
    //  scanf("%d" , &n);

    //  for(int i =0; i<=10; i++){
    //     printf("User Out Put %d \n" , n*i);
    //  }

    //!! break Statement
    //!! exit the loop


    // !! Keep taking numbers as input from user until user enters an odd number.
    /*
   int num ;
   for(;;){
    printf("Enter a Number : ");
    scanf("%d" , &num);

    if(num%2==1){
        printf("Finaly you give a Odd Number...\n");
        break;
    }else{
        printf("Give a Odd Number Not Evevn Number....\n");
    }

   }
    */

    //!! Keep taking number as input from user until user enters a number which is  multiple of 7
  /*
    int num ;
    do
    {
        printf("Enter a value : ");
        scanf("%d" , &num);
        if(num%7==0){
           
            break;
        }
    } while (1);
    printf("Finally you give number which multiple of 7..\n");

    */

    //!!continue Statement
    //!!skip to next iteration

    /*
     নিশ্চিত ভাই 👍 **শর্ট করে নোটের মতো করে দিচ্ছি** 👇
       
       ### `continue` Statement (Short Note)
       
       * `continue` লুপের **বর্তমান iteration স্কিপ করে**
       * সরাসরি **পরের iteration-এ চলে যায়**
       * লুপ **পুরো বন্ধ করে না**
       
       **Difference মনে রাখো:**
       
       * `break` → লুপ শেষ করে
       * `continue` → শুধু ওই iteration বাদ দেয়
       
       ✍️ *Used when you want to skip specific conditions but keep the loop running.*

    */
  /*
    for(int i =0; i <=10; i++){
        if(i==6){
           continue; 
        }
        printf("Skip the next iteration : %d \n" , i);
    }

    */

    // !! Question 20 --. Print all the odd number from 5 to 50
    /*
    for(int i =5 ; i<=50 ; i++){
        if(i%2!=0){
            printf("all Odd Number From 5 to 50--> %d \n" , i);

        }
    }

    */

    //!! question -21 --> Print the factorial of aa number n;
    
    /*
     int n ;
     printf("Enter a Value : ");
     scanf("%d" ,&n);
      int fact = 1;
     for(int i =1; i<=n ; i++){
        fact=fact*i;
       
     }
      printf("Factorial result : %d \n" ,fact);
      */
     //!!Question 22
     //!! Print revers of the table for a number n.
     
      int n ;
      printf("Enter a Value : ");
      scanf("%d" , &n);
      for(int i =n; i>=1 ; i--){
        printf("Result %d \n" , i);
      }
    return 0;
}
