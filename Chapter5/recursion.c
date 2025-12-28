//

#include <stdio.h>
#include <math.h>

int sum(int n);
int fact(int n);
float convertTemp(float celsius);

int main()
{
    //  int s =sum(5);
    //  printf("Sum of N : %d \n" , s);
    //  printf("The value of factorial %d \n" , fact(5));
    float celsius = 37.00;
    float f = convertTemp(celsius);
    printf("celsius to fahrenhite %f \n", f);
    return 0;
}
//! resursetion function
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumNm1 = sum(n - 1); // sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}

//!! Practice QS 31---->
//!!Factorial of n // recursion function use

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int factNm1 = fact(n - 1);
    int factN = factNm1 * n;
    return factN;
}
/*
!5
5*4*3*2*1
4*3*2*1
3*2*1
2*1
*/

//!! Practice QS 32 ----->
//!! Write a function to convert celsius to fahenheit.

/*
 C=5/9(F-32);
 F = (9/5 *C)+32
*/

float convertTemp(float celsius)
{
    return (celsius * 5 / 9) + 32;
}

/*
এইটা একদম **line by line** easy ভাবে বুঝাই 👇

---

### 🔹 `int sum(int n);`

👉 এটা function declaration
মানে compiler-কে আগে থেকেই বলে দেওয়া:

> “sum নামে একটা function আছে, যেটা int নিবে আর int return করবে”

---

### 🔹 `int main(){`

👉 program execution এখান থেকে start

---

### 🔹 `int s = sum(5);`

👉 এখানে কী হচ্ছে জানো? 👀

* `sum(5)` call হচ্ছে
* মানে: **1 থেকে 5 পর্যন্ত যোগফল বের করো**
* এই call টা recursion শুরু করে 🔁

---

### 🔹 `printf("Sum of N : %d \n" , s);`

👉 `sum(5)` থেকে যেই result আসবে, সেটা print করবে

---

### 🔹 `int sum(int n){`

👉 recursion function start
👉 `n` হচ্ছে current number

---

### 🔹 `if(n==1){ return 1; }`

👉 🔥 **Base case**

* recursion এখানেই থামে
* কারণ:

  * 1 পর্যন্ত যোগফল = 1
* এইটা না থাকলে program infinite চলত 😵

---

### 🔹 `int sumNm1 = sum(n-1);`

👉 এখানেই আসল recursion 😎

যখন `sum(5)` call হয়:

```
sum(5) → sum(4)
sum(4) → sum(3)
sum(3) → sum(2)
sum(2) → sum(1)
```

👉 `sum(1)` এ গিয়ে base case hit করে return করে `1`

---

### 🔹 `int sumN = sumNm1 + n;`

👉 এখন return back শুরু হয় ⏪

```
sum(1) = 1
sum(2) = 1 + 2 = 3
sum(3) = 3 + 3 = 6
sum(4) = 6 + 4 = 10
sum(5) = 10 + 5 = 15
```

---

### 🔹 `return sumN;`

👉 final result উপরের call-এ পাঠায়
শেষে `main()` এ গিয়ে `s = 15`

---

## 🔥 Short summary (note করার জন্য):

📌 `sum(5)` নিজেকে নিজে call করে `sum(1)` পর্যন্ত
📌 `n==1` হলে recursion থামে
📌 তারপর backward এ যোগ হয়ে result বের হয়

👉 **এটাই recursion working flow** 💯


*/

/*
চল **stack diagram** দিয়ে একদম ক্লিয়ার করি 😎
(note করার জন্য perfect)

---

### 🔁 Function Call Stack (sum(5))

👇 প্রথমে call গুলো জমা হয় (stack এ)

```
sum(5)
 └── sum(4)
      └── sum(3)
           └── sum(2)
                └── sum(1)  ← base case
```

---

### 🛑 Base Case

```
sum(1) = 1
```

এখান থেকেই **return back** শুরু 🔙

---

### 🔄 Return হওয়ার সময় (stack unwind)

```
sum(2) = 1 + 2 = 3
sum(3) = 3 + 3 = 6
sum(4) = 6 + 4 = 10
sum(5) = 10 + 5 = 15
```

---

### ✅ Final Output

```
Sum of N : 15
```

---

### 🧠 One-line মনে রাখো:

📌 **Recursion প্রথমে নিচে নামে (call stack), তারপর উপরে উঠে result বানায়।**

এইটা বুঝলে recursion game over 🔥

*/

/*
nice 😎
তাহলে **factorial recursion**টা quick + cleanভাবে দিচ্ছি 👇

---

## 🔢 Factorial কী?

👉 `n! = n × (n-1) × (n-2) ... × 1`
যেমন: `5! = 5×4×3×2×1 = 120`

---

## ✅ C code (recursion দিয়ে)

```c
#include <stdio.h>

int fact(int n);

int main() {
    int f = fact(5);
    printf("Factorial: %d\n", f);
    return 0;
}

int fact(int n) {
    if (n == 1) {      // base case
        return 1;
    }
    return n * fact(n - 1); // recursive call
}
```

---

## 🧠 Line by line কী হচ্ছে?

### `fact(5)` call হলে 👇

```
fact(5) → 5 * fact(4)
fact(4) → 4 * fact(3)
fact(3) → 3 * fact(2)
fact(2) → 2 * fact(1)
fact(1) → 1   ← base case
```

### Return back করার সময় 🔙

```
fact(2) = 2 * 1 = 2
fact(3) = 3 * 2 = 6
fact(4) = 4 * 6 = 24
fact(5) = 5 * 24 = 120
```

---

## 🔥 Short note (exam friendly):

📌 Function নিজেকে নিজে call করে
📌 `n==1` হলে recursion থামে
📌 Stack এ আগে call, পরে result তৈরি

চাও তো **fibonacci** বা **recursion vs loop** compare করে দেখাই 👀

*/