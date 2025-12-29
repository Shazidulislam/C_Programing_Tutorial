/*
??Pointer to Pointer

??A variable that stores the memory address of another pointer

!! Pointer to Pointer
!!
!! Syntax
!!
!! int **pptr;
!!
!! char **pptr;
!!
!! float **pptr;

*/

/*
ok, bro 😎 এবার আমরা **pointer to pointer** নিয়ে কথা বলি, step by step।

---

## 🔹 Pointer to Pointer কি?

* Normal pointer = একটি variable এর **address ধরে রাখে**
* Pointer to pointer = একটি **pointer এর address ধরে রাখে**

👉 সহজভাবে:

```
value → stored in variable
variable address → stored in pointer
pointer address → stored in pointer-to-pointer
```

---

## 🔹 Example diagrammatically

```c
int age = 20;   // normal variable
int *ptr = &age; // pointer to age
int **pptr = &ptr; // pointer to pointer
```

Memory look like:

```
age   = 20          (value)
&age  = 0x100       (address of age)
ptr   = 0x100       (ptr stores &age)
&ptr  = 0x200       (address of ptr)
pptr  = 0x200       (pptr stores &ptr)
```

---

## 🔹 Syntax

```c
int **pptr;    // pointer to pointer for int
char **pptr;   // pointer to pointer for char
float **pptr;  // pointer to pointer for float
```

* `**` বোঝায় → দুইবার dereference করতে হবে value পেতে

---

## 🔹 Value access করা

```c
#include <stdio.h>

int main() {
    int age = 20;
    int *ptr = &age;
    int **pptr = &ptr;

    printf("age = %d\n", age);       // 20
    printf("*ptr = %d\n", *ptr);     // 20
    printf("**pptr = %d\n", **pptr); // 20

    return 0;
}
```

* `*ptr` → ptr যে address point করছে, সেই value → age = 20
* `**pptr` → pptr pointed address → ptr → ptr pointed address → age = 20

---

## 🔹 One-liner tip 😎

> Pointer = address of variable
> Pointer to pointer = address of pointer

---

চাও, আমি এটা **diagram** আকারে দেখাই, যাতে memory + dereference সব একদম clear হয়?



*/

// #include <stdio.h>
// #include <math.h>
/*
int main(){

    // float price = 100.00;
    //  float *ptr = &price;
    //  float **pptr = &ptr;

    //  printf("%f \n" , **pptr);

     int i =6;
     int *ptr= &i;
     int **pptr = &ptr;

     printf("%d \n" ,**pptr );

     return 0;
}

*/

/*
!! Pointers in Function Call

      *    Call by       Call by
      *    Value          Reference

??   We pass value of      We pass address of
??   variable as            Variable as
??   argument                argument

*/

/*

ok bro, চলা একদম easy way এ pointer + function call বোঝাই 😎

---

## 🔹 Function call এর দুইটা type

### 1️⃣ Call by Value

* আমরা **variable এর value** function এ পাঠাই
* function এর ভিতরে যে value change করি, **original variable change হয় না**

```c
#include <stdio.h>

void addOne(int x) {
    x = x + 1;
}

int main() {
    int a = 10;
    addOne(a);
    printf("%d", a); // 10 → original value unchanged
}
```

* `a` এর copy পাঠানো হয় → main এর `a` safe

---

### 2️⃣ Call by Reference (Pointers ব্যবহার করে)

* আমরা **variable এর address** function এ পাঠাই
* function এর ভিতরে change করলে **original variable change হয়**

```c
#include <stdio.h>

void addOne(int *x) {
    *x = *x + 1; // value at address modify
}

int main() {
    int a = 10;
    addOne(&a);   // address pass
    printf("%d", a); // 11 → original value changed
}
```

* `&a` → address of `a`
* `*x` → a এর value
* function ভিতরে modify করলে main এর `a` ও change হবে

---

## 🔹 Difference Table (easy)

| Call Type     | Argument পাঠানো   | Function ভিতরে change           |
| ------------- | ----------------- | ------------------------------- |
| Call by Value | value             | original variable **unchanged** |
| Call by Ref   | address (pointer) | original variable **changed**   |

---

### 🔹 Quick tip 😎

* যদি **original variable change করতে চাই → pointer / call by reference**
* যদি **copy লাগে → call by value**

---

চাও তো আমি এটাকে **diagram সহ দেখাই**, memory + pointer visualize করে একদম clear করার জন্য?


*/
//!! call by  Reference

#include <stdio.h>
#include <math.h>

void addOne(int *x);
int main()
{

    int a = 10;
    addOne(&a);
    printf("call by Reference ===  %d \n" , a);
    return 0;
}

void addOne(int *x){
   *x = *x+10;
}

