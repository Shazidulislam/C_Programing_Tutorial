


/*
!!   Pointers
*  A variable that stores the memory address of another variable

!! Syntax
!! 
!! int age = 22;
!! 
!! int *ptr = &age;
!! 
!! int _age = *ptr;

*/
/*
nice, একদম textbook stuff 🔥
চল এটাকে **লাইন বাই লাইন easy Bangla**তে ভেঙে বলি।

---

## 🔹 Pointers

**Pointer** হলো এমন একটা **variable**,
যেটা অন্য একটা variable-এর **memory address** স্টোর করে।

👉 মানে: value না, **address ধরে রাখে**।

---

## 🔹 Syntax ব্যাখ্যা

```c
int age = 22;
```

* `age` একটা **normal int variable**
* এর ভ্যালু = `22`
* মেমোরিতে কোথাও রাখা আছে

---

```c
int *ptr = &age;
```

* `int *ptr` → ptr হলো একটা **int pointer**
* `&age` → age-এর **address**
* `ptr` এখন age-এর address ধরে রাখছে

👉 ptr → age কে point করছে

---

```c
int _age = *ptr;
```

* `*ptr` → ptr যে address-এ point করছে, সেখানে থাকা value
* মানে → `age` এর value
* তাই `_age = 22`

---

## 🔹 Memory Visualization 🧠

```
age      = 22
&age     = 0x100
ptr      = 0x100
*ptr     = 22
```

---

## 🔹 Short trick মনে রাখার জন্য ✍️

* `&` → address বের করে
* `*` → address-এর ভেতরের value দেয়
* pointer নিজে value না, **address রাখে**

---

## 🔹 এক লাইনে summary 😎

> Pointer হলো এমন variable, যেটা অন্য variable কোথায় আছে সেটা জানে।


*/

/*
!! Declaring Pointers
*int *ptr;
*
*char *ptr;
*
*float *ptr;
nice, এটাও super important topic 🔥
চল **declaring pointers** টা ক্লিয়ার করি, zero confusion।

---

## 🔹 Declaring Pointers মানে কী?

Pointer declare করা মানে 👉
**কোন টাইপের data-এর address রাখবে**, সেটা বলা।

---

## 🔹 Syntax

```c
dataType *pointerName;
```

---

## 🔹 Example গুলো explain করি

### ✅ int pointer

```c
int *ptr;
```

* `ptr` → int pointer
* এটা **int variable-এর address** রাখবে
* `*ptr` করলে **int value** পাওয়া যাবে

---

### ✅ char pointer

```c
char *ptr;
```

* এটা **char variable-এর address** রাখে
* সাধারণত **string** এর জন্য use হয়

---

### ✅ float pointer

```c
float *ptr;
```

* এটা **float variable-এর address** রাখে
* `*ptr` → float value দেয়

---

## 🔹 Important rule ⚠️

Pointer-এর টাইপ আর variable-এর টাইপ **same হতে হবে**।

```c
int a = 10;
int *p = &a;   // ✅ correct

float b = 5.5;
int *q = &b;   // ❌ wrong
```

---

## 🔹 Common beginner confusion 😵

```c
int* p1, p2;
```

* `p1` → pointer
* `p2` → normal int ❌

✔️ Better way:

```c
int *p1;
int *p2;
```

---

## 🔹 One-line memory hack 😎

> Pointer declare করার সময় `*` দেখে বুঝবে, এটা **address রাখে**।


*/


/*
!! Format Specifier
!! 
!! printf("%p" , &age);
!! 
!! printf("%p" , ptr);
!! 
!! printf("%p" , &ptr);

good catch 🔥 এইটা exam + viva favourite
চল **format specifier `%p`** টা একদম clear করি।

---

## 🔹 Format Specifier `%p`

`%p` ব্যবহার করা হয় **memory address print** করার জন্য।

👉 address মানেই pointer related stuff।

---

## 🔹 ধরো এই কোডটা

```c
int age = 22;
int *ptr = &age;
```

---

## 🔹 এখন এক এক করে দেখি 👇

### 1️⃣

```c
printf("%p", &age);
```

* `&age` → age-এর **address**
* `%p` → address print করবে

👉 output: `0x7ff...` (random-looking hex value)

---

### 2️⃣

```c
printf("%p", ptr);
```

* `ptr` এর ভ্যালু = `&age`
* তাই এটাও **age-এর address** প্রিন্ট করবে

👉 এই দুইটা same address দেখাবে ✔️

---

### 3️⃣

```c
printf("%p", &ptr);
```

* `ptr` নিজেও একটা variable
* তারও একটা আলাদা **address** আছে

👉 এটা **ptr-এর address**, age-এর না ❌

---

## 🔹 Quick summary table 🧠

| Expression | কী print হবে         |
| ---------- | -------------------- |
| `&age`     | age-এর address       |
| `ptr`      | age-এর address       |
| `&ptr`     | ptr-এর নিজের address |

---

## 🔹 One-line trick 😎

* `%p` → address
* `&` → কার address
* `ptr` → যাকে point করছে তার address

চাও তো আমি এটা **diagram দিয়ে** বা **printf("%d", *ptr)** কেন কাজ করে সেটা next দেখাই 🔥


*/

/*
simple কথা বলি 😄

## `%u` কী?

`%u` হলো **format specifier**,
যেটা দিয়ে **unsigned integer** print করা হয়।

---

## 🔹 unsigned integer মানে কী?

* শুধু **positive number (০ সহ)**
* কোনো **negative value নাই**

```c
unsigned int x = 25;
printf("%u", x);
```

👉 output: `25`

---

## 🔹 `%d` vs `%u`

```c
int a = -5;
unsigned int b = 5;

printf("%d", a); // -5
printf("%u", b); // 5
```

* `%d` → signed int (positive + negative)
* `%u` → unsigned int (only positive)

---

## 🔹 Pointer এর সাথে confusion ⚠️

অনেক সময় মানুষ address print করতে `%u` ব্যবহার করে — **এটা ভুল** ❌

```c
printf("%u", &a); // ❌ wrong
printf("%p", &a); // ✅ correct
```

👉 address সবসময় `%p` দিয়ে।

---

## 🔹 One-line মনে রাখো 😎

> `%u` = unsigned int print করার জন্য।

Exam/viva hack:
👉 **address ≠ %u**, **address = %p** 🔥

*/










/*
!! Format Specifier
*
*Printf("%d" , age);
*Printf("%d" , *ptr);
*
!! Printf("%d" , *(&age));
*
*/







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
!! Pointers in Function Call
      
      *    Call by       Call by
      *    Value          Reference   

??   We pass value of      We pass address of
??   variable as            Variable as 
??   argument                argument

*/

#include<stdio.h>
#include<math.h>

int main(){
    int age = 20;
    int *ptr = &age; //mke a pointer to use *
    int _age = *ptr;
    // printf("%d \n" , _age );
    // printf("Address print *ptr  %p \n" , &ptr);
    // printf("Address print  ptr %p \n" , ptr);
    // printf("Address print  age %p \n" , &age);
    // printf("Address print  age %u \n" , &age);
    // printf("Address print  _age %p \n" , &_age);
    /*
    Address print *ptr  0061FF1C
Address print  ptr 0061FF18
Address print  age 0061FF1C
Address print  _age 0061FF14
    */

    printf("age  %d \n" , age);
    printf("*ptr %d \n" , *ptr);
    printf(" &age %d \n" , *(&age));

    return 0;
}