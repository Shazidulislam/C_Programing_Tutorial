#include <stdio.h>
#include <math.h>

// !!Conditional Statements

int main()
{

    // int age;
    // printf("Enter the age : ");
    // scanf("%d", &age);

    // if(age>=18){
    //     printf("Adult");
    // }
    // else if(age>=13 && age <18){
    //     printf("Tinezer ");
    // }
    // else{
    //     printf("child");
    // }

    //!!Conditional Operators , morder version of if, elese
    //** Condition ? doSomething if TRUE : doSomething if FALSE;

    //? age>=18 ?printf("Adult") : age>=13&& age<18 ? printf("Tinezer"): printf("child");

    //! switch

    /*switch(number) {

        case C1: //do something
        
               break;
               
               case C2 : //do something
               
               break;
               
               default : //do something
       
       }*/

   /*    int day ;
       printf("Enter day (1-7)");
       scanf("%d" , &day);

       switch (day)
       {
       case 1:printf("Monday");
        break;
       case 2:printf("Tuesday");
       break;
       case 3:printf("Wednesday");
       break;
       case 4:printf("Thursday");
       break;
       case 5:printf("Friday");
       break;
       case 6:printf("Saturday");
       break;
       case 7:printf("Sunday");
       break;
       default:printf("This not a valid day");
        break;
       }
        */

        //switch Properties -->Nested if , else

        /*
        int number ;
        printf("Enter the number : ");
        scanf("%d" , &number);

        if(number >0){
            printf("Number is getter then 0 \n");

            if(number%2==0){
                printf("This is even Number \n");
                if(number%3==0){
                    printf("This numbr is divided by 3 \n");
                }else{
                    printf("This number not divided by \n");
                }
            }else{
                printf("this is odd number \n");
            }

        } else{
            printf("This number less then 0 \n");
        }
            */

            //!! Write a program to check if a student passed or failed
            int marks ;
            printf("Entey Your Marks : ");
            scanf("%d" , &marks);
            
            // if(marks>30){
            //     printf("Student passed  \n");
            // }else{
            //     printf("Student fail \n");
            // }

            if(90<=marks&&marks<=100){
                printf("Student got A+");
            }else if(70<=marks&&marks<90){
                printf("Student got A");
            }else if(30<=marks&&marks<70){
                printf("Student got B"); 
            }else if(marks<30){
                printf("Student Got C");
            }else{
                printf("Student fail");
            }




    return 0;
}