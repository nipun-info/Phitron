/*******************************
      Week-02: Module 05:
   Conditional Statement Recap
*******************************/

/***********************
    Grading System
***********************/
#include <stdio.h>

int main()
{
    int marks;

    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("You have got A+ Grade\n");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("You have got A Grade\n");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("You have got A- Grade\n");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("You have got B Grade\n");
    }
    else if (marks >= 40 && marks <= 49)
    {
        printf("You have got C Grade\n");
    }
    else if (marks >= 33 && marks <= 39)
    {
        printf("You have got D Grade\n");
    }
    else if (marks >= 0 && marks <= 32)
    {
        printf("You have got F Grade\n");
    }
    else
    {
        printf("Invalid Number\n");
    }

    return 0;
}

/***********************
   Nested Grading System
***********************/

#include <stdio.h>

int main()
{
    int marks;

    scanf("%d", &marks);

    if (marks >= 33 && marks <= 100)
    {
        printf("You have passed\n");
        if (marks >= 80 && marks <= 100)
        {
            printf("You have got A+ Grade\n");
            if (marks >= 90)
            {
                printf("Congratulations, You have got scholarship\n");
            }
        }
        else if (marks >= 70 && marks <= 79)
        {
            printf("You have got A Grade\n");
        }
        else if (marks >= 60 && marks <= 69)
        {
            printf("You have got A- Grade\n");
        }
        else if (marks >= 50 && marks <= 59)
        {
            printf("You have got B Grade\n");
        }
        else if (marks >= 40 && marks <= 49)
        {
            printf("You have got C Grade\n");
        }
        else if (marks >= 33 && marks <= 39)
        {
            printf("You have got D Grade\n");
        }
    }
    else if (marks >= 0 && marks <= 32)
    {
        printf("You have got F Grade\n");
        printf("You have Failed. Try again.\n");
    }
    else
    {
        printf("Invalid Number\n");
    }

    return 0;
}

/***********************
   Problem:
   Odd Even Positive Negative

***********************/
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even\n");

        if (n < 0)
        {
            printf("Negative\n");
        }
        else
        {
            printf("Positive\n");
        }
    }
    else
    {
        printf("Odd\n");

        if (n < 0)
        {
            printf("Negative\n");
        }
        else
        {
            printf("Positive\n");
        }
    }
    return 0;
}

/***********************
   Codeforces Problem-1:
   Given a letter X. Determine whether X is Digit or Alphabet and if it is
   Alphabet determine if it is Capital Case or Small Case.

   Input:
   Only one line containing a character X which will be a capital or small letter or digit.

   Output:
   Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA"
   in the first line followed by a new line that contains "IS CAPITAL" if X is a capital
   letter and "IS SMALL" if X is a small letter.

***********************/
#include <stdio.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if (ch >= 'A' && ch <= 'Z')
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }
    }
    return 0;
}

/***********************
   Codeforces Problem-2:
   Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

   Input:
   Only one line containing 3 numbers A, B and C ( - 100000 ≤ A, B, C ≤ 100000)

   Output:
   Print the minimum number followed by a single space then print the maximum number.

***********************/
#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c)
    {
        printf("%d", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", c);
    }

    printf(" ");

    if (a >= b && a >= c)
    {
        printf("%d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", c);
    }

    return 0;
}

// -------way-2:
#include <stdio.h>

int main()
{

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    // Finding the minimum
    int min = a;

    if (b < min)
        min = b;

    if (c < min)
        min = c;

    // Finding the Maximun

    int max = a;
    if (b > a)
        max = b;

    if (c > a)
        max = c;

    printf("%d %d\n", min, max);

    return 0;
}

/*******************************
      Week-02: Module 06:
   Loop and Nested Loop Recap
*******************************/
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        // printf("Hello world.\n");
        printf("%d\n", i);
    }

    return 0;
}

// ------------Exmaple-2:
#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
        // printf("%d\n", i);
    }

    return 0;
}

// -------- Example-3:
#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        // count++;
        for (int j = 0; j < 5; j++)
        {
            count++;
        }
    }
    printf("%d\n", count); // output 15

    return 0;
}

// ------- Example-4:
#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        // count++;
        for (int j = 0; j < 6; j++)
        {
            // count++;
            for (int k = 0; k < 10; k++)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    // printf("%d\n", count);

    return 0;
}

// ======= M-6.3: Multiplication Table ========
// --------without using loop
#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    printf("%d x 1 = %d\n", num, num * 1);
    printf("%d x 2 = %d\n", num, num * 2);
    printf("%d x 3 = %d\n", num, num * 3);
    printf("%d x 4 = %d\n", num, num * 4);
    printf("%d x 5 = %d\n", num, num * 5);

    return 0;
}

// --------using loop
#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d   x %3d = %3d\n", num, i, num * i);
    }

    return 0;
}

// --------- multi multiplication using nested loop
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;

    scanf("%d", &n);

    // printf("%d", n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}

// ======= 6.4: Odd, Even, Positive, Negative =========

/***********************
   Codeforces Problem-3: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
   Given N numbers. Count how many of these values are even, odd, positive and negative.

   Input:
   First line contains one number N (1 ≤ N ≤ 1000) number of values.
   Second line contains N numbers (-10^5 ≤ X i ≤ 10^5).

   Output:
   Print four lines with the following format:
   First Line: "Even: X", where X is the number of even numbers in the given input.
   Second Line: "Odd: X", where X is the number of odd numbers in the given input.
   Third Line: "Positive: X", where X is the number of positive numbers in the given input.
   Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

***********************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // printf("%d\n", n);

    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
        if (x > 0)
        {
            positiveCount++;
        }
        else if (x < 0)
        {
            negativeCount++;
        }
    }

    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", positiveCount);
    printf("Negative: %d\n", negativeCount);

    return 0;
}

// ======= 6.5: Break Statement =========
#include <stdio.h>

int main()
{
    for (int i = 100; i <= 300; i++)
    {
        printf("Checking %d\n", i);
        if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
        {
            printf("%d is the number\n", i);
            break;
        }
    }

    // --------- example-2

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);

        printf("Line 1\n");
        printf("Line 2\n");

        if (i == 5)
        {
            break;
        }

        printf("Line 3\n");
        printf("Line 4\n");
    }

    return 0;
}

// ======= 6.6: Continue Statement =========

// ======= 6.7: Digits =========
/***********************
   Codeforces Problem-3: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
   Given a number N. Print the digits of that number from right to left separated by space.

   Input:
   First line contains a number T (1 ≤ T ≤ 10) number of test cases.
   Next T lines will contain a number N (0 ≤ N ≤ 109)

   Output:
   For each test case print a single line contains the digits of the number separated by space.

***********************/
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        if (n == 0)
        {
            printf("0");
        }

        while (n > 0)
        {
            int digit = n % 10;
            printf("%d ", digit);

            n /= 10;
        }
        printf("\n");
    }

    return 0;
}

// ======= 6.8: Pattern =========
/*
Print pattern-1:
*
* *
* * *
* * * *
* * * * *
for(int i = 1; i<= 5; i++){
    // printf("i = %d\n", i);
    for(int j = 1; j <= i; j++){
        // printf("%d ", j);
        printf("* ", j);
    }
    printf("\n");
}
*/

/*
Print pattern-2:
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
for(int i = 1; i<= 5; i++){
    // printf("i = %d\n", i);
    for(int j = i; j >= 1; j--){
        printf("%d ", j);
    }
    printf("\n");
}
*/

/*
Print pattern-3:
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // printf("%d\n", i);

        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }

        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
Print pattern-4:
    1
   12
  123
 1234
12345

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // printf("%d\n", i);

        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }

        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

Pattern -6:
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

#include <stdio.h>
#include <limits.h>

int main()
{
    int n = 7;
    for(int i = n; i >= 1; i--){

        for(int j = 1; j <= i; j++){
            printf("%d ", j);

        }

        printf("\n");
    }

    return 0;
}
*/

/************** Week-02 ***************
    Module 07: Introduction to Array
***************************************/
// 7.4: Initializing an Accessing an Array

int arr[5] = {1, 55, 8, 9, 77};
int arr[] = {2, 55, 99, 8, 105};
int arr[5] = {0};

// -------- Example-1:
#include <stdio.h>

int main()
{
    int num[5] = {12, 58, 51, 80, 11};

    printf("%d", num[2]);

    return 0;
}

// -------- Example-2:
#include <stdio.h>

int main()
{
    int ar[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("%d", ar[2]);

    return 0;
}

// --------- Example-3:
#include <stdio.h>

int main()
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // printf("%d", a[1]);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

// ---------- Example-4
#include <stdio.h>

int main()
{
    float a[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &a[i]);
    }

    // printf("%d", a[1]);

    for (int i = 0; i < 5; i++)
    {
        printf("%0.2f ", a[i]);
    }

    return 0;
}

// ----------- Example-5
#include <stdio.h>

int main()
{
    char a[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &a[i]);
    }

    // printf("%d", a[1]);

    for (int i = 0; i < 5; i++)
    {
        printf("%c ", a[i]);
    }

    return 0;
}

// -------- Example-6:
#include <stdio.h>

int main()
{
    // int ar[5] = {10};
    int ar[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ar[i]);
    }

    return 0;
}

// ---------- Example-7:
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n); // এরে সাইজ ইনপুট নেওয়া হচ্ছে।

    int ar[n]; // ওই সাইজের এরে ডিক্লেয়ার করা হচ্ছে। 

    for (int i = 0; i < n; i++) // ৫ সাইজের এরে হলে আমরা লুপ চালাতাম i<5 পর্যন্ত। এখন আমাদের সাইজ হচ্ছে n তাই আমরা লুপ চালাচ্ছি i<n পর্যন্ত।
    {
        scanf("%d", &ar[i]); // ইনপুট নিচ্ছি। 
    }

    for (int i = 0; i < n; i++) // প্রথম ইন্ডেক্স থেকে লাস্ট ইন্ডেক্স পর্যন্ত লুপ চালিয়ে প্রিন্ট করা হচ্ছে।
    {
        printf("%d ", ar[i]);
    }

    return 0;
}

// ---------- Example-8: Array reverse
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n); // এরে সাইজ ইনপুট নেওয়া হচ্ছে।

    int ar[n]; // ওই সাইজের এরে ডিক্লেয়ার করা হচ্ছে। 

    for (int i = 0; i < n; i++) // ৫ সাইজের এরে হলে আমরা লুপ চালাতাম i<5 পর্যন্ত। এখন আমাদের সাইজ হচ্ছে n তাই আমরা লুপ চালাচ্ছি i<n পর্যন্ত।
    {
        scanf("%d", &ar[i]); // ইনপুট নিচ্ছি। 
    }

    for (int i = n - 1; i >= 0; i--) // এরের লাস্ট ইন্ডেক্স n-1 থেকে প্রথম ইন্ডেক্স 0 পর্যন্ত লুপ চালানো হয়েছে। যেহেতু প্রতিবার ইন্ডেক্স এর মান ১ করে কমছে তাই i-- করে প্রতিবার i এর মান ১ করে কমানো হচ্ছে।
    {
        printf("%d ", ar[i]);
    }

    return 0;
}

// --- 7.6: Sum and Average of An Array Elements
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n); // এরে সাইজ ইনপুট নেওয়া হচ্ছে।

    int ar[n]; // ওই সাইজের এরে ডিক্লেয়ার করা হচ্ছে। 

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]); // ইনপুট নিচ্ছি। 
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }

    printf("Sum: %d\n", sum);

    double avg = (double)sum / n;

    printf("Average: %lf\n", avg);

    return 0;
}

// ---- 7.6: Min Max of an Array
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;

    scanf("%d", &n); // এরে সাইজ ইনপুট নেওয়া হচ্ছে।

    int ar[n]; // ওই সাইজের এরে ডিক্লেয়ার করা হচ্ছে। 

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]); // ইনপুট নিচ্ছি। 
    }

    int min = INT_MAX, max = INT_MIN;
    // int min = ar[0], max = ar[0];

    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }

        if (ar[i] > max)
        {
            max = ar[i];
        }

        printf("min = %d, max = %d\n", min, max);
    }

    printf("Minimum = %d, Maximum = %d", min, max);

    return 0;
}

/***********************
 ******* Week02 ********
 **** Conceptual-01 ****
 **********************/
//--------Problem-1:
#include <stdio.h>

int main()
{
    int holiday;
    scanf("%d", &holiday);

    if (holiday >= 3)
    {
        printf("Cox's Bazar\n");

        if (holiday > 3)
        {
            printf("Go to Saint Martin\n");
        }
        else
        {
            printf("Cox's Bazar ei thakbo\n");
        }
    }
    else if (holiday >= 2)
    {
        printf("Sylhet\n");
    }
    else
    {
        printf("Stay Home");
    }

    return 0;
}

/**********Lucky Numbers*************
   Codeforces Problem-4: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
   A number of two digits is lucky if one of its digits is divisible by the other.
   For example, 39, 82, and 55 are lucky, while 79 and 43 are not.
   Given a number between 10 and 99, determine whether it is lucky or not.

   Input
   Only one line containing a single number N (10≤N≤99).

   Output
   Print "YES" if the given number is lucky, otherwise print "NO".

***********************/
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;

    scanf("%d", &n);

    int first_digit = n / 10;
    int second_digit = n % 10;

    if (first_digit % second_digit == 0 || second_digit % first_digit == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

/********** Fixed Password *************
   Codeforces Problem-5: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
   Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password
   is incorrect otherwise, print "Correct" and terminate the program.
   Note: The "Correct" password is the number 1999.

   Output
   Print "Wrong" if the password is typed wrong otherwise, print "Correct" if the password is
   typed correctly.

***********************/
#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}

/********** Max *************
   Codeforces Problem-5: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
   Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.

***********************/
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int maxium_value = INT_MIN;
    // printf("%d\n", maxium_value);

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        // printf("%d %d\n", maxium_value, x);

        if (maxium_value < x)
        {
            maxium_value = x;
        }

        // printf("latest: %d\n", maxium_value);
    }

    printf("%d\n", maxium_value);

    return 0;
}

/***********************
 ******* Week02 ********
 **** Conceptual-02 ****
 **********************/

/***********************
 *** Week02: MO- 6.5 ***
 *** Practice Day-01 ***
 **********************/
/*
    Given a lowercase alphabet character. You have to print the next character in the alphabet.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    if (ch == 'z')
    {
        printf("a");
    }
    else
    {
        printf("%c", ch + 1);
    }

    return 0;
}

/*
    Ali Baba: One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4 numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×) between the other three numbers; so that each operator is used only once.
*/
// --------- Wrong answer on test 4

int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // Check all possible ways to use +, -, * with a, b, and c to reach d.
    if ((a + b + c == d) ||
        (a + b - c == d) ||
        (a + b * c == d) ||
        (a - b + c == d) ||
        (a - b - c == d) ||
        (a - b * c == d) ||
        (a * b + c == d) ||
        (a * b - c == d) ||
        (a * b * c == d))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

/*
    Divisor: Given a number N. Print all the divisors of N in ascending order.
*/
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    // printf("%d", N);

    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

/*
    Even Number: Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
*/

#include <stdio.h>

int main()
{
    // ---------Code Here........
    int N;
    scanf("%d", &N);

    int evenNum = 0;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            evenNum = 1;
        }
    }

    if (!evenNum)
    {
        printf("-1");
    }

    return 0;
}

/*
    Lucky Numbers: A number of two digits is lucky if one of its digits is divisible by the other. (see concept-1)
*/

#include <stdio.h>

int main()
{
    // ---------Code Here........
    int n;
    scanf("%d", &n);

    int last_digit = n % 10;
    int first_digit = n / 10;

    if (last_digit == 0)
    {
        printf("YES");
    }
    else if (first_digit % last_digit == 0 || last_digit % first_digit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

/***********************
*** Week02: MO- 7.5 ***
*** Practice Day-02 ***
**********************/

/*
    Summation: Given a number N and an array A of N numbers. Print the absolute summation of these numbers.
*/
// Solve this support session
#include <stdio.h>

int main()
{
    // ---------Code Here........
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("%d", abs(sum));

    return 0;
}

/*
    Search: Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index). (see concept-2)
*/
#include <stdio.h>
#include <limits.h>

int main()
{
    // ---------Code Here........
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    int search = -1;

    for (int i = 0; i < n; i++)
    {
        // printf("Value: %d  Index: %d \n", arr[i], i);
        if (arr[i] == x)
        {
            search = i;
            break;
        }
    }

    printf("%d", search);

    return 0;
}

/*
    Replacement: Given a number N and an array A of N numbers. Print the array after doing the following operations:
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = 1;
        }

        if (arr[i] < 0)
        {
            arr[i] = 2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
