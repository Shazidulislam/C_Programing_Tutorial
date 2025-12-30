#include <stdio.h>
#include <math.h>

int main()
{

    /*
    !! Queston 41
    *Write a program to enter price of 3 items & print their final cost with gst

    */

    float items[3];
    
    printf("Enter items 1 : ");
    scanf("%f" , &items[0]);

    printf("Enter items 2 : ");
    scanf("%f" , &items[1]);

    printf("Enter items 3 : ");
    scanf("%f" , &items[2]);

    printf("Total price 1 : %f \n" , items[0]+(0.18*items[0]));
    printf("Total price 2 : %f \n" , items[1]+(0.18*items[1]));
    printf("Total price 3 : %f \n" , items[2]+(0.18*items[2]));

    return 0;
}