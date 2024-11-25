/*************************************
      Week-04: Module 13: Frequency Array
**************************************/

// ===== 13.2: Frequency Array in C  =======

// ===== 13.3: How To use Frequency Array =======

// ===== 13.4: Implementing Frequency Array  =======
#include <stdio.h>

int main()
{
    // ---------Code Here........
    int n;
    scanf("%d", &n);

    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int f[100000] = {0}; // Declare freq array

    for (int i = 0; i < n; i++) // loop freq array
    {
        // printf("%d ", a[i]);
        f[a[i]] = 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d %d\n", i, f[i]);
    }

    // cheek exist element found or not found
    printf("Found: %d", f[8]);

    // cheek the value which value ache r nai
    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);

        printf("%d ", x);

        if (f[x] == 1)
        {
            printf("ache\n");
        }
        else
        {
            printf("nai\n");
        }
    }

    return 0;
}

// ===== 13.5: Unique Characters in A string  =======
#include <stdio.h>
#include <string.h>

int a[100000];

int main()
{
    // ---------Code Here........
    char str[10] = "apple";

    int f[26] = {0};

    int len = strlen(str);

    // printf("%d", len);

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        // printf("%c", ch);

        int index = ch - 'a';
        // printf("%d ", index);

        f[index] = 1;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        // printf("%c %d \n", i + 'a', f[i]);
        count += f[i];

        if (f[i] == 1)
        {
            printf("%c %d \n", i + 'a', f[i]);
        }
    }

    printf("%d\n", count);

    return 0;
}
// ------- recape char str
#include <stdio.h>

int main()
{
    char str[50] = "md nasihul islam";

    int f[26] = {0};

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];

        int index = ch - 'a';

        // printf("%d %c\n", index, ch);

        f[index] = 1;
    }

    int cnt = 0;

    for (int i = 0; i < 26; i++)
    {
        // printf("%d %d %c\n", f[i], i, i + 'a');
        cnt += f[i];

        if (f[i] == 1)
        {
            printf("%c %d\n", i + 'a', f[i]);
        }
    }

    printf("%d\n", cnt);

    return 0;
}

// ===== 13.6: Frequency Array Problem  =======
/*
    https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
    Given 2 numbers N, M and and array A of N numbers. For every number 1 to M, print how many times this number appears in this array.
*/
#include <stdio.h>
#include <string.h>

int f[100000];

int main()
{
    // ---------Code Here........
    int n, m;

    scanf("%d %d", &n, &m);

    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        f[a[i]] += 1;
    }

    for (int i = 1; i <= m; i++)
    {
        // printf("%d -> %d\n", i, f[i]);
        printf("%d\n", f[i]);
    }

    return 0;
}

/*************************************
      Week-04: Module 14: 2D Array
**************************************/

// ===== 14.2: Array Dimension  =======

// ===== 14.3: Declaration, Initialization & access  =======
#include <stdio.h>
#include <string.h>

int main()
{
    // ---------Code Here........
    // int arr[3][5];
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("i = %d, j = %d, address = %d || ", i, j, arr[i][j]);
        }
    }

    return 0;
}

// ===== 14.4: Input Output of 2D Matrix  =======
#include <stdio.h>
#include <string.h>

int main()
{
    // ---------Code Here........
    int n, m;

    scanf("%d %d", &n, &m);

    int a[n + 5][m + 5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // after change the value
    a[1][2] = 100;
    a[0][2] = 200;
    a[2][2] = 300;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// ===== 14.5: Square, Diagonal, Scalar Matrix =======
/*
Square matrix: A square matrix is a matrix that has an equal number of rows and columns.
1 3 4 9
6 4 2 5
9 2 5 2
8 5 1 0

Diagonal matrix: https://byjus.com/maths/diagonal-matrix/
5 0 0
0 2 0
0 0 3

(0,0) (0,1) (0,2) (0,3)
(1,0) (1,1) (1,2) (1,3)
(2,0) (2,1) (2,2) (2,3)
(3,0) (3,1) (3,2) (3,3)

Scalar Matrix:
1 0 0
0 1 0
0 0 1


*/
#include <stdio.h>
#include <string.h>

int f[100000];

int main()
{
    // ---------Code Here........
    int n;

    scanf("%d", &n);

    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    int element = m[0][0];

    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (m[i][j] != element)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (m[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("Scalar");
    }
    else
    {
        printf("Not Scalar");
    }

    return 0;
}

/*
Explain the code: https://chatgpt.com/c/67233535-191c-8007-b9b4-61acfe3224e4

Certainly! This code checks if a given 𝑛 × 𝑛 matrix is a scalar matrix. A scalar matrix is a square matrix in which all the diagonal elements are the same and all other elements are zero.


(0,0), (0,1), (0,2)

(1,0), (1,1), (1,2)

(2,0), (2,1), (2,2)

*/

// ===== 14.6: Checking a Scalar Matrix  =======

// ===== 14.7: Matrix CF  =======
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
#include <stdio.h>
#include <string.h>

int main()
{
    // ---------Code Here........
    int n;

    scanf("%d", &n);

    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    int main_diagonal = 0, sec_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                main_diagonal += m[i][j];
            }

            if (i + j == n - 1)
            {
                sec_diagonal += m[i][j];
            }
        }
    }

    int diff = abs(main_diagonal - sec_diagonal);

    printf("%d\n", diff);

    return 0;
}

/*************************************
      Week-04: Conceptual Session
**************************************/

/*
Alphabet character frequency
Details Explain this link:
https://chatgpt.com/c/67235d6b-29e8-8007-9ae7-ddee5c2f1fb6

*/
#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);
    char s[n + 5];
    scanf("%s", s);

    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        // printf("%c ", s[i]);
        int index = s[i] - 'a';
        freq[index]++;
        // printf("%d ", index);
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            printf("%c %d\n", i + 'a', freq[i]);
    }

    return 0;
}

// -------Code Here....: Value wih max occurance

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int freq[100005] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d -> %d\n", i, freq[i]);
    // }

    int val = -1;
    int max = -1;

    for (int i = 0; i < 100005; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            val = i;
        }
    }

    printf("%d is Maximum Value -> %d Times", val, max);

    return 0;
}

// ---------Code Here......: 2D Array
#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// ---------Code Here......: Sum Of 2D Array
#include <stdio.h>

int main()
{

    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int b[r][c];
    int sum[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf(" %d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
main diagonal => i == j || Secondary Diagonal => i + j = n - 1
*/

/*************************************
      MO - 14.5: Practice Day -1
**************************************/

/*
    Count Letters: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
    Given a string S. Determine how many times does each letter occurred in S.
*/

/*
    Search In Matrix: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
    Given two numbers N and M , a 2D array of size N * M and a number X. Determine whether X exists in the 2D array A or not.
*/

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    if (found)
    {
        printf("will not  take number\n");
    }
    else
    {
        printf("will take number\n");
    }

    return 0;
}

/*
    Matrix: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
    Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).
*/

/*************************************
    MO - 15: Dynamic Array & Pointer
**************************************/

// ===== 15.2: Pointers In C  =======
#include <stdio.h>

int main()
{
    int a = 5;

    int *b = &a;

    printf("%d \n", a);

    // printf("%d \n", &a);

    // printf("%d \n", &b);

    // printf("%d \n", b);

    // printf("%d \n", *b);

    *b = 6;

    int val = *b;

    printf("%d\n", val);

    printf("%d \n", a);

    return 0;
}

// ===== 15.3: Working with Pointers  =======
#include <stdio.h>

int main()
{
    // -----Swap two value with pointer
    int a = 5, b = 6;

    int *x = &a, *y = &b;

    printf("----- Before swaping\n");

    printf("%d %d\n", a, b);

    int temp = *x;
    *x = *y;

    *y = temp;

    printf("----- After swaping\n");
    printf("%d %d\n", a, b);

    return 0;
}

// ===== 15.4: Pointers & Array  =======
#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int *p = arr;

    printf("%d %d %d %d\n", p, &arr, &arr[1], &arr[2]);

    printf("%d %d \n", (p + 1), (p + 3));

    char a = 'a';

    char *x = &a;

    printf("%d %d\n", x, x + 1);

    return 0;
}

// -----------
#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int *p = arr;

    printf("address: %d %d - %d %d\n", &arr[0], p, &arr[1], p + 1);
    printf("value: %d %d - %d %d\n", arr[0], *p, arr[1], *p + 1);

    return 0;
}

// ===== 15.5: Dynamic Array in C  =======

// ===== 15.6: Implementing Dynamic Array  =======
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int *temp = arr;

    arr = (int *)realloc(arr, 10 * sizeof(int));

    if (arr == NULL)
    {
        arr = temp;
    }

    for (int i = 5; i < 10; i++)
    {
        arr[i] = 100;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}

/*
details in example:
https://chatgpt.com/c/6724b2bc-db4c-8007-a096-780032392602

*/

// ===== 15.7: Pointers Of Pointer  =======

/***********************
 ******* Week04 ********
 ***** Concept-02 ******
 **********************/

// ----------- Example-1:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;

    int *p = &x;

    printf("x = %d \n", x);
    printf("p = %d\n", *p);

    *p = 100;

    printf("x = %d \n", x);
    printf("p = %d\n", *p);

    printf("p er size = %d \n", sizeof(p));

    double a = 10.56;
    double *ptr = &a;

    printf("a = %0.2lf\n", a);
    printf("ptr = %0.2lf\n", *ptr);

    printf("ptr er size = %d \n", sizeof(ptr));

    char ch = 'A';
    char *pch = &ch;

    printf("ch = %c \n", ch);
    printf("pch = %c \n", *pch);

    printf("pch er size = %d \n", sizeof(pch));
}

// ----------- Example-2:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //    MCQ Round
    int x = 10;
    int *p = &x;

    int y = 20;

    *p = ++y;

    x++;

    printf("x = %d || address = %d \n", x, &x);
    printf("p = %d || address = %d \n", *p, p);
    printf("y = %d || address = %d \n", y, &y);

    return 0;
}

// ----------- Example-3:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //    MCQ Round
    int x, y, z;
    x = 10, y = 20, z = 30;

    int *p, *q;

    p = &x;
    q = &y;

    y = 34;

    p = q;

    printf("x = %d || address = %d \n", x, &x);
    printf("y = %d || address = %d \n", y, &y);
    printf("z = %d || address = %d \n", z, &z);
    printf("p = %d || address = %d \n", *p, p);
    printf("q = %d || address = %d \n", *q, q);

    return 0;
}

// ----------- Example-4:
#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Static array:
    // int n;
    // int *ptr = &n;

    // // scanf("%d", &n);
    // scanf("%d", ptr);

    // int arr[n];

    // for(int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    // for(int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    return 0;
}

// ----------- Example-4: dynamic array and sum
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr = &n;

    scanf("%d", ptr);

    // int arr[n];
    int *arr;

    int sum = 0;

    // arr = (int *) malloc(n * sizeof(int));
    arr = (int *)calloc(n, sizeof(int));

    arr = realloc(arr, (n + 5) * sizeof(int));

    if (arr == NULL)
    {
        printf("It is not possible to realloc");
    }

    for (int i = 0; i < n + 5; i++)
    {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < n + 5; i++)
    {
        printf("%d ", *(arr + i));
        sum += *(arr + i);
    }

    printf("\nSum = %d\n", sum);

    free(arr);

    return 0;
}

/***********************
 ******* Week04 ********
 *** Practice Day-02 ***
 **********************/

// 1. Add: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x, *y;

    x = (int *)calloc(1, sizeof(int));
    y = (int *)calloc(1, sizeof(int));

    scanf("%d %d", x, y);

    int sum;
    sum = *x + *y;

    printf("%d", sum);

    return 0;
}

// 2. Swap: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x, *y;

    x = (int *)calloc(1, sizeof(int));
    y = (int *)calloc(1, sizeof(int));

    scanf("%d %d", x, y);

    int temp = *x;
    *x = *y;

    *y = temp;

    printf("%d %d\n", *x, *y);

    return 0;
}

// 3. Min & Max: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

/***********************
 ******* Week04 ********
 ***** Assignment-3 ****
 problem Explain link: https://chatgpt.com/c/67258970-fce0-8007-bf09-748f9cee2bf0
 **********************/
