#include<stdio.h>
#include<math.h>
//!! Chapter 3 talking about loop.

//!!Loop Control Instructions
int main(){
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

     int n;
     printf("Enter the value N : ");
     scanf("%d" , &n);
     int i=0;
     while (i<=n){
        printf("User Given Input : %d \n" , i);
        i++;
     }
     {
        /* code */
     }
     
  
        


    return 0;
}
