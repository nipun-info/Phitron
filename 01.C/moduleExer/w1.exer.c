/*
    === Module 01: Basic Syntax, Variable & Data Types ===
*/

/*
// MO-1.3:BASIC STRUCTURE OF A C PROGRAM
- Multiline comment
- Single line comment
*/

// documentation section
/*
author:name
date: --:--:--
code: a basic C Program
*/

// link section / preprocession
#include <stdio.h>
#include <math.h>


// definition section
#define PI 3.1416
#define ll long long

// global declaration section
int N = 100;
int sum(int x, int y);

// main function section
int main()
{
    // statement
    return 0;
}

// MO - 1.4 : RUNNING YOUR FIRST CODE
// MO -1.5 : DATA TYPE AND VARIABLE

/*
Format Specifier: Format specifiers are used together with the printf()
function to tell the compiler what type of data the variable is storing.
It is basically a placeholder for the variable value.


A format specifier starts with a percentage sign %, followed by a character.


For example, to output the value of an int variable, use the format specifier %d
surrounded by double quotes (""), inside the printf() function:

** যখন আমরা variable declare করি তখন সেটি RAM -এ Store হয়।

short int - %hd
int - %d
long int - %ld
long long - %lld
char - %c
float - %f
double - %lf
long double - %Lf


unsigned int - %u
unsigned short - %hu
unsigned long int - lu
*/

#include <stdio.h>
int
main()
{
    // Create variables
    int x = 20;
    float y = 25.99;
    char z = 'D';

    // Print variable
    printf("%d\n", x);
    printf("%.4f\n", y);
    printf("%c\n", z);
    printf("My fav Number is : %d", x);
    printf("My fav Number %d and my fav char %c and score is %.2f\n", x, z, y);

    // Print Values Without Variables
    // You can also just print a value without storing it in a variable, as long as
    // you use the correct format specifier:
    printf("My score is %d", 34);
}

/*
    === Module 02: Operators, Conditional Statements ===
*/
#include <stdio.h>
#include <math.h>

int main()
{
    // First Program running
    printf("Hello C Programming\n");

    printf("Hello world\n");

    /*
    Formate Specifier:
        int         -> 4bytes   -%d
        long int    -> 4bytes   -%ld
        long long   -> 8bytes   -%lld
        float       -> 4bytes   -%f
        double      -> 8bytes   -%lf
        char        -> 1bytes   -%c
    */

    // How to take input and show Output
    // Exam-1:
    // long long int a;

    // scanf("%lld", &a);

    // printf("%lld", a);

    // Exam-2:
    // int a, b, c;

    // scanf("%d %d %d", &a, &b, &c);

    // printf("%d %d %d", a, b, c);

    // Exam-3:
    int a, b, c;

    // scanf("%d %d %d", &a, &b, &c);

    // printf("a = %d  b = %d c = %d", a, b, c);

    // Exam-4:
    int b, c;
    short int a = 7;
    char ch;

    // scanf("%hd %d %d %c", &a, &b, &c, &ch);

    // printf("a = %hd b = %d c = %d ch = %c", a, b, c, ch);

    // ------------------------------

    // MO-2: Arithmetic Operator
    // printf("%d\n", 5 + 3);
    // printf("%d\n", 5 / 3);
    // printf("%d\n", 5 % 3);
    // printf("%f\n", 5 / 3.0);

    // ------------------------------

    int a = 15, b = 3;

    // printf("%d\n", a + b);
    // printf("%d\n", a - b);
    // printf("%d\n", a * b);

    // int result = a + b;

    // printf("Total = %d\n", result);

    // ------------------------------

    int x = 100000, y = 100000;
    double z = 100000;

    // long long result2 = x * z;
    // long long result3 = 1LL * x * y; // alernative way

    // printf("x + y = %d\n", x + y);
    // printf("x - y = %d\n", x - y);
    // printf("x * y = %d\n", x * y); // wrong output (limition)
    // printf("x * z = %lld\n", result2);
    // printf("x * y = %lld\n", result3);

    // ------------------------------

    int a, b;

    // scanf("%d %d", &a, &b);

    // printf("%d\n", a + b);
    // printf("%d\n", a - b);
    // printf("%d\n", a * b);

    // return 0;
}

// MO-2.3: Assignment Operators and Increment, Decrement Operators
#include <stdio.h>

int main()
{
    int a = 50;

    a += 10;
    a *= 10;
    a -= 10;

    printf("%d\n", a);
    printf("%d\n", a++);
    printf("%d\n", ++a);

    // --------------------------

    int a = 60;

    printf("%d\n", a);
    a++;
    printf("%d\n", a);

    // --------------------------

    int a = 60;

    printf("%d\n", a--);

    printf("%d\n", a);

    return 0;
}

// MO-2.4: Relational Operators
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // int a = 5, b = 5;
    // int a = 5, b = 58;

    // bool isEqual = a == b;

    // printf("%d", isEqual);

    // if condition is true print = 1 and condition is false print = 0;

    int a = 7, b = 5;

    // bool flag = a > b;
    bool flag = a >= b;

    printf("Flag = %d", flag);
}

// MO-2.5: Logical Operators
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // bool result = (2 < 5) && (5 > 3);
    // bool result = (6 < 5) || (5 > 7) || (5 < 4);
    // bool result = (4 < 5) && (10 > 7) && (5 < 12);
    bool result = !((4 < 5) && (10 > 7) && (5 < 12));

    printf("Result = %d", result);

    return 0;
}

// MO-2.6: Conditional Statements(if)
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 5;

    printf("Before if\n");

    if (a == 7)
    {
        printf("Inside if\n");
    }

    printf("After if\n");

    // ------------------------------

    int a = 9;

    if (a < 10)
    {
        printf("inside = %d\n", a += 100);
    }
    printf("%d\n", a);

    return 0;
}

// MO-2.7: Conditional Statements(if else)
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int price = 30;

    if (price <= 50)
    {
        printf("Buy 4 eggs\n");
        printf("Take %d Taka Back", 50 - price);
    }
    else
    {
        printf("Buy 2 eggs");
    }

    return 0;
}

// MO-2.8: If Else Ladder
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;

    scanf("%d", &a);

    if (a < 5)
    {
        printf("a is less than 5");
    }
    else if (a < 10)
    {
        printf("a is less than 10");
    }
    else if (a < 20)
    {
        printf("a is less than 20");
    }
    else if (a < 50)
    {
        printf("a is less than 50");
    }
    else
    {
        printf("A is less then 100");
    }

    return 0;
}

// MO-2.9: Nested If Else
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int tourDays = 1;

    if (tourDays == 2)
    {
        bool isBoatAvailable = false;

        if (isBoatAvailable)
        {
            printf("Going To Taguar Hour\n");
        }
        else
        {
            printf("Going to Shrimangal\n");
        }
    }
    else if (tourDays == 4)
    {
        bool isShipAvailable = true;
        if (isShipAvailable)
        {
            printf("Going to saint martin\n");
        }
        else
        {
            printf("Going to Cox Bazar\n");
        }
    }
    else
    {
        printf("Ghore boshe thako");
    }

    return 0;
}

// MO-2.10: Switch
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int day = 3;

    switch (day)
    {
    case 1:
        printf("saturday\n");
        break;

    case 2:
        printf("Sunday\n");
        break;

    case 3:
        printf("Monday\n");
        break;

    case 4:
        printf("Tuesday\n");
        break;

    case 5:
        printf("Wednessday\n");
        break;

    case 6:
        printf("Thursday\n");
        break;

    case 7:
        printf("Friday\n");
        break;
    default:
        printf("Wrong day\n");
    }

    return 0;
}

// ================== Module 03: Loop ===============

// ******************* For Loop ********************
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // For Loop
    printf("Before For Loop\n");

    for (int i = 1; i <= 3; i++)
    // for(int i = 3; i >= 1; i--)
    {
        printf("inside For Loop\n and Value of i = %d\n", i);
    }

    printf("After For Loop\n");

    return 0;
}

// ******************* While Loop ********************
#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Before while Loop\n");

    int i = 0;

    while (i < 5)
    {
        printf("Inside while loop i = %d\n", i);
        i++;
    }

    printf("After while Loop\n");

    return 0;
}

// ******************* do while Loop ********************
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i = 1;

    do
    {
        printf("Inside do while %d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}

// ******************* Nested Loop ********************
#include <stdio.h>
#include <stdbool.h>

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// example-2:
#include <stdio.h>
#include <stdbool.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d hour, %d minute\n", i, j);
        }
        printf("\n");
    }

    return 0;
}

// ******************* Ascil Table ********************

// ******************* Working with loops ********************
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 10;

    // int number = 1;

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}

// CodeExam-2:
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 10;

    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}

// CodeExam-3:
#include <stdio.h>

int main()
{
    // Print Z to A

    for (char i = 'Z'; i >= 'A'; i--)
    {
        printf("%c\n", i);
    }

    return 0;
}

// CodeExam-4:
#include <stdio.h>

int main()
{
    // Print 1 to N Sum (1 + 2 + 3 + ........ + N)

    int n = 10;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        printf("%d + %d = ", sum, i);

        sum += i;

        printf("%d\n", sum);
    }

    printf("Result = %d", sum);

    return 0;
}

// CodeExamp-5: Find Odd and Even Number
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d Even\n", i);
        }
        else
        {
            printf("%d Odd\n", i);
        }
    }

    return 0;
}

// CodePloblem-: You will be given a positive integer N, you need to print
// from 1 to N and besides the value, print Yes or No.
// Print Yes if the value is divisible by 5 and print No otherwise.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }

    return 0;
}

// ?Dont understant
#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    for (j = 1; j <= 5; j++)
    {
        i++;
    }
    printf("%d", j);

    return 0;
}

// ******************* Infinity loop ********************
#include <stdio.h>

int main()
{

   // infinity loop -1:
   for(int i = 0; i <=10; )
   {
      printf("Hello Loop ");
   }

   // infinity loop -2:
   for(int i = 0; i <=10; i-- )
   {
      printf("Hello Loop ");
   }

   // infinity loop -3:
   for(int i = 0; ; i++ )
   {
      printf("Hello Loop ");
   }

   // infinity loop -4:
   for(; ;)
   {
      printf("Hello Loop ");
   }

   // infinity loop -5:
   int i = 0;
   while(1)
   {
      printf("Hello While Loop ");
   }

   // infinity loop -6:
   int i = 0;
   while(i < 10)
   {
      printf("Hello While Loop ");
   }

   // infinity loop -7:
   int i = 0;
   while(i < 10)
   {
      printf("Hello While Loop ");
      i--;
   }

   return 0;
}





// ******************* loop Conseptual 02 ********************
// #problem-1: Given a number N, Print all even numbers
// between 1 and N inclusive in separate lines.
// Output: Print the answer according to the required above.
// if there are no even number print -1
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // int i = 1;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            count = count + 1;
            printf("%d\n", i);
        }
    }
    if (count == 0)
    {
        printf("-1\n");
    }

    return 0;
}

/*
Problem-2: Print the below pattern
*****
****
***
**
*
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 1; // outer
    int j = 1; // inner

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
