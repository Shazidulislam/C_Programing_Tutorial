#include <stdio.h>
#include <math.h>
/*
!! Array
*Collection of similar data types stored at
*contiguous memory locations

ঠিক আছে bro, শুধু `ptr` vs `*ptr` এর difference টা সহজভাবে দিচ্ছি:

| জিনিস    | নাম             | অর্থ                                      | টাইপ         | উদাহরণে কী ধরে রাখে         |
|----------|-----------------|-------------------------------------------|--------------|-----------------------------|
| `ptr`    | পয়েন্টার নিজে   | একটা ঠিকানা (address) ধরে রাখে             | `float *`    | মেমরির একটা ঠিকানা (যেমন 0x7fffabc0) |
| `*ptr`   | ডিরেফারেন্স    | সেই ঠিকানায় যে ভ্যালু আছে, সেটা           | `float`      | ভ্যালুটা (যেমন 200.00)        |

### সহজ কথায়:

- `ptr` → **কোথায় আছে** (ঠিকানা / location)
- `*ptr` → **কী আছে** (সেই জায়গায় রাখা মান / value)

### উদাহরণ:

```c
float price = 200.00;
float *ptr = &price;  // ptr এখন price এর ঠিকানা ধরে রেখেছে

printf("%u\n", ptr);    // ঠিকানা প্রিন্ট হবে (যেমন: 6422280)
printf("%.2f\n", *ptr); // ভ্যালু প্রিন্ট হবে: 200.00
```

- `ptr` দিয়ে তুমি ঠিকানা দেখতে/চেঞ্জ করতে পারো
- `*ptr` দিয়ে তুমি সেই ঠিকানার ভ্যালু পড়তে/চেঞ্জ করতে পারো

ব্যস, এটুকুই difference! 😊
আর কিছু লাগলে বলিস।

*/
int main()
{
    /*
    !! How to declar a array.
    int marks1 = 97;
    int marks2 = 93;
    int marks3 = 95;

    int marks[3] = {97 , 93 ,95};

   */

    /*
    !! Array Input and Output


    int marks[3];
    printf("Enter Physics : ");
    scanf("%d", &marks[0]);

    printf("Enter Chemistry : ");
    scanf("%d", &marks[1]);

    printf("Enter Math : ");
    scanf("%d", &marks[2]);

    printf("physics === %d \n Chemistry === %d \n Math === %d" , marks[0] , marks[1] ,marks[2]);
*/

    /*
    !! Inititalization of Array
    int marks[ ] = {97, 98, 89};

    int marks[ 3 ] = {97, 98, 89};
    */

    /*
    !! Pointer Arithmetic
     ! Case 1

    int age = 22;
    int *ptr = &age;
     printf("Ptr == %u \n" , ptr); //
     ptr++;
     printf("Ptr after == %u" , ptr);// +4 bere jabe ager theke

    !Case 2
    float price = 200.00;
    float *ptr = &price;
    printf("Price ptr === %u \n" ,ptr);
    ptr++;
    printf("Price ptr === %u \n" , ptr); // ager theke 4 byte bere jabe


    ! case 3
    char star = 'a';
    char *ptr = &star;
    printf("Before %u", ptr);
    ptr++;
    printf("after %u", ptr);

    */

    /*
    !Pointer Arithmetic
    !- We can also subtract one pointer from another
    !- We can also compare 2 pointers

    int age = 20;
    int _age = 22;

    int *ptr = &age;
    int *_ptr = &_age;

    printf("value ptr %u _ptr %u \n" , ptr , _ptr);
    printf("Defrence between=: %u \n" , ptr-_ptr);
    _ptr = &age;
    printf("Comparison == %u \n" , ptr == _ptr);
    */

    /*
    !! Traverse an Array

    int aadhar[10];

    int *ptr = &aadhar[0];
    ঠিক আছে bro, সহজ ভাষায় বুঝিয়ে দিচ্ছি **"Traverse an Array"** মানে কী।

### Traverse an Array মানে কী?

**Array traverse করা** মানে →
Array এর **প্রত্যেকটা উপাদান (element)** একটা একটা করে **দেখা বা প্রসেস করা**।
অর্থাৎ শুরু থেকে শেষ পর্যন্ত সবগুলো element এর কাছে যাওয়া।

সাধারণত এটা দিয়ে আমরা:
- সব element প্রিন্ট করি
- কোনো calculation করি (যেমন sum, average)
- কোনো element খুঁজি
- কোনো condition চেক করি

### তোমার কোডে কী হচ্ছে?

```c
int aadhar[10];          // ১০টা integer এর একটা array
int *ptr = &aadhar[0];   // ptr কে array এর প্রথম element এর ঠিকানায় সেট করা হয়েছে
```

এখান থেকে শুরু করে আমরা পয়েন্টার ব্যবহার করে পুরো array ট্রাভার্স করতে পারি।

### উদাহরণ: পয়েন্টার দিয়ে array traverse করা

```c
#include <stdio.h>

int main() {
    int aadhar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int *ptr = &aadhar[0];  // অথবা শুধু: int *ptr = aadhar;

    printf("Array elements:\n");

    for(int i = 0; i < 10; i++) {
        printf("aadhar[%d] = %d\n", i, *ptr);  // *ptr দিয়ে বর্তমান element এর value প্রিন্ট
        ptr++;  // পরের element এর ঠিকানায় যাও (৪ বাইট এগোয়)
    }

    return 0;
}
```

#### আউটপুট:
```
Array elements:
aadhar[0] = 10
aadhar[1] = 20
aadhar[2] = 30
...
aadhar[9] = 100
```

এখানে যা হচ্ছে:
- `ptr` শুরুতে প্রথম element (`aadhar[0]`) এর ঠিকানায়।
- `*ptr` দিয়ে value পড়ছি।
- `ptr++` করে পরের element এ যাচ্ছি।
- এভাবে ১০ বার লুপ চালিয়ে **পুরো array traverse** করছি।

### অন্যভাবেও traverse করা যায় (সাধারণ উপায়):

```c
for(int i = 0; i < 10; i++) {
    printf("%d\n", aadhar[i]);  // index দিয়ে
}
```

কিন্তু পয়েন্টার দিয়ে করলে বোঝা যায় array আর pointer কতটা কাছাকাছি কাজ করে।

### সারাংশ:

**Traverse an Array** = Array এর প্রতিটি element একে একে visit করা।
তোমার কোডে `int *ptr = &aadhar[0];` দিয়ে শুরু করা হয়েছে যাতে পয়েন্টার ব্যবহার করে সহজেই traverse করা যায়।


    int aadhar[10];
    int *ptr = &aadhar[0];
    for (int i = 0; i < 10; i++)
    {
        printf("%d index == : ", i);
        scanf("%d", &aadhar[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        // printf("%d output ==%d \n", i, *ptr + i);
        printf("%d output of array ==%d \n", i, aadhar[i]);
    }

    */

    /*
    !!Arrays as Function Argument
??Function Declaration

!!void printNumbers (int arr[ ], int n)
OR

!!void printNumbers (int *arr, int n)


??Function Declaration
*printNumbers(arr, n);
    */

    return 0;
}

/*
!Syntax
!
!int marks[3];
!
!char name[10];
!
!float price[2];
*/

/*
Input & Output

scanf("%d"

, &marks[0]);

printf("%d"

, marks[0]);
*/

/*
Inititalization of Array

int marks[ ] = {97, 98, 89};

int marks[ 3 ] = {97, 98, 89};
*/

/*
Pointer Arithmetic

Pointer can be incremented

& decremented

CASE 1
!! int age =22;
!! int *ptr = &age;
!!  ptr++;
*/

/*
Pointer Arithmetic

CASE 2
* float price = 20.00;
* float *ptr = &price;
* ptr++;

CASE 3
* char  star ='*';
* char *ptr = &star;
* ptr++;
*/

/*
Pointer Arithmetic

- We can also subtract one pointer from another

- We can also compare 2 pointers
*/

/*
!Array is a Pointer
!
!int *ptr = &arr[0];
!
!int *ptr = arr;
*/

/*
?Traverse an Array
?
?int aadhar[10];
?
?int *ptr = &aadhar[0];
*/

/*
!!Arrays as Function Argument
??Function Declaration

!!void printNumbers (int arr[ ], int n)
OR

!!void printNumbers (int *arr, int n)


??Function Declaration
*printNumbers(arr, n);

*/

/*
!! Multidimensional Arrays
!! 2 D Arrays

*int arr[ ][ ] = { {1, 2}, {3, 4} }; //Declare

!!Access

!arr[0][1]
!
!arr[1][0]
!
!arr[1][1]
*/