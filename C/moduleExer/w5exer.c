/******* Week05: MO-17 ********
 *** Function and Recursion ***
 ******************************/ 

//=============== 17.2: Function In C



//=============== 17.3: Return + Parameter

#include <stdio.h>

int add(int a, int b)
{
    printf("Function Called\n");

    int sum = a + b;

    return sum;
}

int main()
{

    // int result = add(10, 20);
    // printf("%d\n", result);

    printf("Before\n");

    printf("%d\n", add(20, 20));

    printf("%d\n", add(80, 20));

    printf("After\n");

    return 0;
}


//=============== 17.4: Return + No Parameter
// ----------- Explame-1:
#include <stdio.h>

int a, b;

int add()
{
    printf("Function called\n");

    int sum = a + b;

    return sum;
}

int main()
{
    a = 25, b = 55;

    // printf("%d\n", add());

    a = 5, b = 505;
    // printf("%d\n", add());

    // printf("%d\n", add());
    
    return 0;
}

// ----------- Explame-2:
#include <stdio.h>

int a, b;

int add()
{
    printf("Function called\n");

    int a = 5, b = 10;

    int sum = a + b;

    return sum;
}

int main()
{
    a = 25, b = 55;
    // printf("%d\n", add());

    a = 5, b = 505;
    // printf("%d\n", add());

    return 0;
}

#include <stdio.h>

int add()
{
    printf("Function called\n");

    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;

    return sum;
}

double getPi()
{
    return 3.14589;
}

int main()
{
    printf("%lf\n", getPi());
    
    // printf("%d\n", add());
    // printf("%d\n", add());

    return 0;
}


//=============== 17.5: No Return + Parameter
// -------Explam-1:
#include <stdio.h>

void sum(int a, int b)
{
    printf("Function called\n");

    int sum = a + b;

    printf("%d\n", sum);

    // return;
    printf("hi");
}

int main()
{

    int a, b;

    scanf("%d %d", &a, &b);

    sum(a, b);

    return 0;
}

// ------------ Example -2:
#include <stdio.h>

void alphaCheck(char ch)
{
    if ('a' <= ch && ch <= 'z')
    {
        printf("Lower Case\n");
    }
    else
    {
        printf("Upper Case\n");
    }
}

int main()
{

    alphaCheck('A');
    alphaCheck('a');

    return 0;
}



//=============== 17.6: No Return + No Parameter
#include <stdio.h>

void sum()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Function called\n");

    int sum = a + b;

    printf("%d\n", sum);

}

void greeting()
{
    printf("Good Morning\n");
}

int main()
{
    greeting();
    
    // sum();

    return 0;
}


//=============== 17.7: Usefull Built in Function
#include <stdio.h>

int main()
{
    double a = 10.999, b = 10.111;

    printf("%0.3lf || %0.3lf\n", ceil(a), ceil(b));

    printf("%0.3lf || %0.3lf\n", floor(a), floor(b));

    printf("%0.3lf || %0.3lf\n", round(a), round(b));

    printf("%0.3lf || %0.3lf\n", sqrt(81), sqrt(-21));

    printf("%.3lf || %.3lf\n", pow(3, 3));

    return 0;
}


//=============== 17.8: Variable Scope
#include <stdio.h>


void add(int a, int b)
{

  printf("Inside function: %p %p\n", &a, &b);

  int temp = a;
  a = b;
  b = temp;
}

int main()
{

  int a = 5, b = 6;

  printf("main function: %p %p\n", &a, &b);

  add(a, b);

  printf("%d %d", a, b);

  return 0;
}

// ------------Example: Global scope
#include <stdio.h>

// Global scope
int a, b;

void add()
{

  printf("Inside function: %p %p\n", &a, &b);

  int temp = a;
  a = b;
  b = temp;
}

int main()
{

  // int a = 5, b = 6;

  printf("main function: %p %p\n", &a, &b);

  add(a, b);

  printf("%d %d", a, b);

  return 0;
}



//=============== 17.9: Pointers with Function
#include <stdio.h>

// void swap(int a, int b)  // copy of main a, b

void swap(int *x, int *y) // reference of main a, b
{
  printf("Func: %p %p\n", x, y);

  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int a = 5, b = 6;

  swap(&a, &b);

  printf("main: %p %p\n", &a, &b);

  printf("%d %d\n", a, b);

  return 0;
}















/******* Week05: MO-18 ********
 *** Function and Recursion ***
 ******************************/ 

//=============== 18.1: Recursion In C


//=============== 18.2: Handling Base Case


//=============== 18.3: Print 1 To N

// 👉 CodeExample-1: 
#include <stdio.h>

void func(int x, int n)
{
  if (x > n)
  {
    return;
  }
  printf("%d\n", x);
  func(x + 1, n);
}

int main()
{

  func(1, 5);

  return 0;
}

// 👉 CodeExample-1: 
#include <stdio.h>

void func(int x, int n)
{
  if (x > n)
  {
    return;
  }
  // printf("%d\n", x);

  printf("Before function call, Current X = %d and N = %d\n", x, n);

  func(x + 1, n);

  printf("After function call, Current X = %d and N = %d\n", x, n);
}

int main()
{

  printf("Before function call in main\n");

  func(1, 5);

  printf("After function call in main\n");

  return 0;
}


//=============== 18.4: Understanding Call Flow and Return


//=============== 18.5: Printing N To 1
#include <stdio.h>

void func(int x, int n)
{

  if (x > n)
  {
    return;
  }

  func(x + 1, n);

  printf("%d\n", x);
}

int main()
{

  func(1, 10);

  return 0;
}


//=============== 18.6: Sum of an Array

#include <stdio.h>

int a[100000], sum;

void goToIndex(int i, int n)
{
  if(i == n) return;

//   sum += a[i];

  goToIndex(i + 1, n);
}

int main()
{

  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    // scanf("%d", &a[i]);
  }

//   sum = 0;

  goToIndex(0, n);

  printf("%d\n", sum);

  return 0;
}

/******* Week05:**************
 ***  ***
Conceptual Session-W05-1
******************************/ 

// 👁️Parameter + Return👁️
#include <stdio.h>

int add(int a, int b)
{
  int sum = a + b;

  return sum;
}


int main()
{

  int a = 10, b = 20;

  int sum = add(a,b);

  printf("%d", sum);

  return 0;
}

// 👁️No Parameter + Return👁️
#include <stdio.h>

int add()
{
  int a, b;
  scanf("%d %d", &a, &b);

  int sum = a + b;

  return sum;
}

int main()
{
  // int sum = add();

  printf("%d", sum);

  return 0;
}

// 👁️Parameter + No Return👁️
#include <stdio.h>

void add(int a, int b)
{
  int sum = a + b;

  printf("%d\n", sum);
}

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);

  add(a, b);

  return 0;
}

// 👁️No Parameter + No Return👁️
#include <stdio.h>

void add()
{
  int a, b;
  scanf("%d %d", &a, &b);

  int sum = a + b;

  printf("%d\n", sum);
}

int main()
{

  // add();

  return 0;
}

/*👁️👁️
  Problem solving : 
  1. Add (works with every type) ()
  1. https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G (parameter , no return )
  2. https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G (no parameter , no return)
👁️👁️*/ 


/*👁️👁️
  Problem solving :Min and Max 
  https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
👁️👁️*/

#include <stdio.h>

void max_min()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = 100001;

    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    int max = -1;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("%d %d", min, max);
}

int main()
{
    max_min();

    return 0;
}

/*👁️👁️
  Problem solving : Prime Function
  https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D
  solve chatGpt: https://chatgpt.com/c/672ad839-ea7c-8007-9a5f-06702eeb0811
👁️👁️*/
#include <stdio.h>
#include <math.h>

void prime_check(int n)
{
    if (n <= 1)
    {
        printf("NO\n");
        return;
    }
    if (n <= 3)
    {
        printf("YES\n");
        return;
    }

    if (n % 2 == 0 || n % 3 == 0)
    {
        printf("NO\n");
        return;
    }

    int flag = 1;

    // for (int i = 5; i * i <= n; i += 6)
    // {
    //     if (n % i == 0 || n % (i + 2) == 0)
    //     {
    //         flag = 0;
    //         break;
    //     }
    // }

    for (int i = 5; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        prime_check(n);
    }

    return 0;
}

/*
  additional : 
  1. Call by value
  2. Call by reference 
  (when to use )

*/ 
#include <stdio.h>

// Call by value (here x can not chage the value)
// void change_to_10(int x)
// {
//     x = 10;
// }

// Call by Reference (here x  chage the value)
void change_to_10(int *x)
{
    *x = 10;
}


int main()
{

    int n = 99;

    // printf("%d\n", &n);

    change_to_10(&n);

    printf("%d\n", n);
}











/******* Week05: MO-18.5 ********
 *** Practice Day-1 ***
 https://chatgpt.com/c/6729fb72-c6dc-8007-b999-9ba23c8b6253

 ******************************/ 
// Add: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A

// 😁 Way -1

#include <stdio.h>

int sum(int x, int y)
{
  return x + y;
}

int main()
{
  int X, Y;

  scanf("%d %d", &X, &Y);

  printf("%d\n", sum(X, Y));

  return 0;
}

// Way-2:

#include <stdio.h>

int x, y;

int sum()
{
  return x + y;
}

int main()
{

  scanf("%d %d", &x, &y);

  printf("%d\n", sum(x, y));

  return 0;
}


// Swap: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E

#include <stdio.h>

int x, y;

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{

  scanf("%d %d", &x, &y);

  swap(&x, &y);

  printf("%d %d\n", x, y);

  return 0;
}


// Printing Recursion: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
#include <stdio.h>

int n;

void func(int n)
{
  if (n <= 0)
    return;

//   func(n - 1);
  
  printf("I love Recursion\n");
  
}

int main()
{

  scanf("%d", &n);

//   func(n);

  return 0;
}



// 🥸🥸🥸 MO-19: Recursion and Pointer 🥸🥸🥸

// 🌱Call By Value, Call by Reference🌱
#include <stdio.h>

void func(int *x, int *y)
{
    *x = 5;
    *y = 15;
}


int main()
{
   int a = 10, b = 20;

   printf("%d %d\n", a, b);


   func(&a, &b);

   printf("%d %d\n", a, b);

   
   return 0;
}


// 🌱Passing Array and String in Function🌱
// -------Example:
#include <stdio.h>

void func(int x[], int n)
{
    for(int i = 0; i < n; i++)
    {
      printf("%d ", x[i]);
    }
}


int main()
{
   
   int arr[20] = {1, 8, 4, 5, 3, 2, 5 , 7 , 6 , 8};

   func(arr, 10);

   return 0;
}

// -----Example: Sum of Array
#include <stdio.h>

int func(int x[], int n)
{
   int sum;

   for (int i = 0; i < n; i++)
   {
      sum += x[i];
   }
   return sum;
}

int main()
{

   int arr[20] = {100, 200, 250, 150, 100};

  //  int res = func(arr, 5);

  //  printf("%d", res);

   return 0;
}

// -----------Example
#include <stdio.h>

void length(char x[])
{
   int n = strlen(x);

   printf("%d\n", n);
}


int main()
{

   char a[20] = "nasihul";

   length(a);

   return 0;
}


// -------- Example
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Count the string length
void length(char x[])
{
   int n = strlen(x);

   printf("%d\n", n);
}

// make first char Upper Case
void makeFirstCharUpper(char x[])
{
   x[0] = toupper(x[0]);

   printf("%s", x);
}

int main()
{

   char s[20] = "nasihul";

   length(s);

   makeFirstCharUpper(s);

   return 0;
}


// 🌱Using Pointer variable as Parameter for Array🌱
// --------Example:
#include <stdio.h>
#include <string.h>

void func(int *x, int n)
{
   for (int i = 0; i < 5; i++)
   {
      printf("%d ", *(x + i));
      x[i] += 50;
   }
}
int main()
{

   int arr[5] = {1, 2, 3, 4, 6};

   func(arr, 5);

   printf("\n");

   for (int i = 0; i < 5; i++)
   {
      printf("%d ", arr[i]);
   }

   return 0;
}


// 🌱Factorial🌱
#include <stdio.h>

long long factorial(int n){
   if( n == 0){
      return 1;
   }

   return n * factorial(n - 1);
}

int main()
{
   int n;

   scanf("%d", &n);

   printf("%lld\n", factorial(n)) ;

   return 0;
}



// 🌱Printing Digits with Recursion🌱
#include <stdio.h>

void printDigits(int n)
{

   if (n == 0)
   {
      return;
   }

   int digit = n % 10;

   printDigits(n / 10);

   printf("%d ", digit);
}

int main()
{
   int t;
   scanf("%d", &t);

   for (int cs = 0; cs < t; cs++)
   {
      int n;
      scanf("%d", &n);

      if(n == 0) printf("0");

      printDigits(n);

      printf("\n");
   }

   return 0;
}



// 🌱Palindrom Array🌱
#include <stdio.h>

int isPalin(int *arr, int i, int j)
{
    if (i > j)
    {
        return 1;
    }

    return arr[i] == arr[j] && isPalin(arr, i + 1, j - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (isPalin(arr, 0, n - 1))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}


/******* Week05: MO-19.5 ********
 *** Practice Day-2 ***
 https://chatgpt.com/c/672c97cd-1b7c-8007-98ff-69ffd7df2ef5
 ******************************/ 


// Shift Zeros: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N


#include <stdio.h>

void shiftZerosToRight(int arr[], int n){
   int j = 0; // index to keep track of non-zeros elements

   // Traverse the array
   for (int i = 0; i < n; i++)
   {
      // If current element is non-zero, move it to position j and increment j
      if(arr[i] != 0)
      {
         arr[j++] = arr[i];
      }
   }
  

   // Fill the remaining elements with zero
   while (j < n){
      arr[j++] = 0;
   }
 
   
}

int main()
{
   int n;
   scanf("%d", &n);

   // Input Elements of array
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }

   // Shift zero sto the right function
   shiftZerosToRight(arr, n);

   // Print the array after shifting right all its zeros.

   for (int i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }

   return 0;
}
