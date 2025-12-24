
#include <stdio.h>



int main(){
     // ** Input
    //!!scanf(" %d ", &age);
      
    int age;
    printf("enter age");
    scanf("%d" , &age);
    printf("age is : %d \n" ,age );

    int a , b;
    printf("Enter a");
    scanf("%d" , &a);

    printf("Enter b");
    scanf("%d" , &b);

    int sum = a+b;
    printf("Sum of these number : %d" , sum);

    return 0;
}