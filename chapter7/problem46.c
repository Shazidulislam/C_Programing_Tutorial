// #include <stdio.h>
// #include <math.h>

// void storeTable(int arr[][10], int n, int m, int number);

// int main()
// {
//     /*
//     !! Practice Qs 46
//     !! Create a 2d array , strong the table of 2 & 3.
//     */

//     int tables[2][10];
//     storeTable(tables, 0, 10, 4);
//     storeTable(tables, 1, 10, 3);

//     for (int i = 0; i < 10; i++){
//         printf("%d \t" , tables[0][i]);
//     };
//     printf("next\n");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d \t" , tables[1][i]);
//     };

//     return 0;
// }

// void storeTable(int arr[][10], int n, int m, int number)
// {
//     for (int i = 0; i < m; i++)
//     {
//         arr[n][i] = number * (i + 1);
//     }
// }




#include <stdio.h>
#include <math.h>
//     !! Practice Qs 46
//     !! Create a 2d array , strong the table of 2 & 3.
void storeTable(int arr[][10], int n, int m , int number);


int main(){
    
    int tables[2][10];
    storeTable(tables , 0 , 10 ,5);
    storeTable(tables , 1 , 10 ,3);

    for (int i = 0; i < 10; i++){
        printf("%d \t" , tables[0][i]);
    };
    printf("next\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t" , tables[1][i]);
    };

    return 0;

}

void storeTable(int arr[][10], int n, int m, int number){
    for(int i =0; i<m ; i++ ){
     arr[n][i] = number * (i+1);
    }
}


















/*
alright bro, let’s break this down clean & chill 😎
line by line বুঝে গেলে 2D array আর function একদম clear হয়ে যাবে।

---

## 🔹 Header files

```c
#include <stdio.h>
#include <math.h>
```

* `stdio.h` → `printf`, `scanf` এর জন্য
* `math.h` → এখানে **use করা হয়নি**, তাই চাইলে remove করতে পারো (extra)

---

## 🔹 Function declaration

```c
void storeTable(int arr[][10], int n, int m, int number);
```

👉 একটা function declare করা হচ্ছে যেটা:

* 2D array নেয়
* কোন row (`n`) এ data বসবে সেটা জানে
* কতগুলো value (`m`)
* কোন নাম্বারের table (`number`)

---

## 🔹 main() function

```c
int tables[2][10];
```

👉 2 row, 10 column এর 2D array

* row 0 → first table
* row 1 → second table

---

### 📌 Function call

```c
storeTable(tables, 0, 10, 4);
```

👉 এর মানে:

* `tables` → array
* `0` → 0 নম্বর row
* `10` → 10 টা value
* `4` → 4 এর multiplication table

➡️ row 0 তে থাকবে:
`4 8 12 16 ... 40`

```c
storeTable(tables, 1, 10, 3);
```

👉 row 1 তে 3 এর table store হবে
`3 6 9 ... 30`

---

## 🔹 Printing first row

```c
for (int i = 0; i < 10; i++){
    printf("%d \t" , tables[0][i]);
}
```

👉 4 এর table print করছে

```c
printf("next\n");
```

👉 next line / separation

---

## 🔹 Printing second row

```c
for (int i = 0; i < 10; i++)
{
    printf("%d \t" , tables[1][i]);
}
```

👉 3 এর table print করছে

---

## 🔹 storeTable() function (main logic)

```c
void storeTable(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}
```

🧠 **What’s happening here?**

* `arr[n][i]` → specific row + column
* `i + 1` → 1 থেকে multiplication শুরু
* `number * (i + 1)` → table value

Example for `number = 4`:

```
arr[0][0] = 4 * 1 = 4
arr[0][1] = 4 * 2 = 8
...
```

---

## 🔥 Final Output

```
4   8   12  16  20  24  28  32  36  40
next
3   6   9   12  15  18  21  24  27  30
```

---

## 💡 Pro tip

* `math.h` দরকার নেই এখানে
* 2D array function এ পাঠাতে হলে **column size fix** থাকতে হয় → `[10]`

চাও তো আমি same code pointer দিয়ে বা dynamic way তেও দেখাতে পারি 😉

*/