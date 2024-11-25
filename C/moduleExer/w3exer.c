
/*************************************
      Week-03: Module 09: 
        Array Operation
**************************************/
// ===== 09.2: Copy of an Array =======
#include <stdio.h>

int a[100000], b[100000];

int main()
{
    int length1 = 0, length2 = 0;

    scanf("%d", &length1);

    for(int i =0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Before Copy:\n");

    for(int i =0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    for(int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n");

    a[2] = 100;

    for(int i = 0; i < length1; i++){
        b[i] = a[i];
    }

    // a[2] = 100;

    printf("After Copy:\n");

    for(int i =0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    for(int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }
    
    return 0;
}

// ===== 09.3: Array Insertion =======
#include <stdio.h>

int a[10000];

int main()
{
    int length;

    scanf("%d", &length);

    for(int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    int index, value;

    scanf("%d %d", &index, &value);


    length++;

    for(int i = length - 1; i >= index; i--)
    {
        a[i+1] = a[i];
    }

    a[index] = value;

    for(int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}

// ===== 09.4: Deleting an Element from an Array =======

#include <stdio.h>

int a[10000];

int main()
{
    int length;

    scanf("%d", &length);

    for(int i = 0; i < length; i++)
    {
        scanf("%d ", &a[i]);
    }

    int index;
    scanf("%d", &index);

    if(index < 0 || index >= length)
    {
        printf("Wrong index input \n");     // validation check
        return 0;
    }

    for(int i = index; i < length - 1; i++)
    {
        a[i] = a[i + 1];
    }

    length--;

    for(int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    
    return 0;
}

// ===== 09.5: Array Reverse With Two Arrays  =======
#include <stdio.h>

int a[100000];
int b[100000];

int main()
{
    int length;

    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d ", &a[i]);
    }

    for (int i = 0, j = length - 1; i < length; i++, j--)
    {
        b[j] = a[i];
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    // for(int i = 0; i < length; i++)
    // {
    //     printf("%d ", b[i]);
    // }

    return 0;
}







// ===== 09.6: Array Reverse Using single Arrays  =======
#include <stdio.h>

int a[100000];

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }

    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}



/*************************************
      Week-03: Module 10: 
    Introduction to String
**************************************/

// ===== Module 10.2: Introduction to String  =======

// ===== Module 10.3: String Declaration and Initialization  =======

// char [0] = "abcd";
char c[50] = "abcd";
char c[] = {'a', 'b', 'c', 'd', '\0'};
char c[5] = {'a', 'b', 'c', 'd', '\0'};


// ===== Module 10.4: String Input and Output  =======
#include <stdio.h>

int main()
{
    // char str[20] = "abcd def ghk lmo";

    // for(int i = 0; i< 4; i++)
    // {
    //     printf("%c ", str[i]);
    // }

    // printf("%s", str);

    char str[50];

    // scanf("%s", str);

    // scanf("%[^\n]s", str);

    fgets(str, sizeof(str), stdin);

    // puts(str); //depricated

    // fputs(str, stdout);

    printf("%s", str); 

    return 0;
}


// ===== Module 10.5: Escape Sequence  =======
#include <stdio.h>

int main()
{
    // char str[] = "Dhaka is the \"capital\" in \tBangladesh";
    // char str[] = "Dhaka is the \"capital\" in \0 Bangladesh";
    char str[] = "Dhaka is the \"capital\" in \\n Bangladesh";

    puts(str);

    return 0;
}


// ===== Module 10.6: Converting String to Integer Number  =======
#include <stdio.h>

int main()
{
    char str[5] = "6";

    printf("%d", str[0] - '0');

    return 0;
}

// --------CodeExample-2:
#include <stdio.h>

int main()
{
    char str[20];

    int n;
    scanf("%d", &n);
    scanf("%s", str);

    int num = 0;
    for(int i = 0; i < n; i++)
    {
        int digit =  str[i] - '0';
        num = num * 10 + digit;
    }

    printf("%d\n", num);

    return 0;
}





/*************************************
      Week-03: Module 11: 
String Operations and Freqyency Array
**************************************/

// ***** 11.2: Length of a String ******

// Example-1: find the string length using for loop
#include <stdio.h>

int main()
{
    char str[20] = "Nasihul Islam";

    int length = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("%d", length);

    return 0;
}

// --------Example-2: find the string length using strlen() method
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "Nasihul Islam Nipun";

    // char str[50] = "Nasihul Islam \0 Nipun";

    int length = strlen(str);

    printf("%d", length);

    return 0;
}

// ***** 11.3: How to copy a String ******
// --------Example-1: Copy string using for loop
#include <stdio.h>
#include <string.h>

int main()
{
    char a[10] = "nasihul";

    char b[10] = "nipun";

    int length = strlen(b);

    printf("Original Str: a = %s b= %s\n", a, b);

    for(int i = 0; i < length; i++)
    {
        a[i] = b[i];
    }

    a[length] = '\0';

    printf("After Copy: a = %s b= %s", a, b);

    return 0;
}

// --------Example-2: Copy string using strcpy() method
#include <stdio.h>
#include <string.h>

int main()
{
    char a[10] = "Najifa";

    char b[10] = "Jafrina";

    printf("Original Str: a = %s b= %s\n", a, b);

    strcpy(a, b);
    // strcpy(b, a);

    printf("After Copy: a = %s b= %s", a, b);

    return 0;
}

// ***** 11.4: String Concatation ******

#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "Najifa ";

    char b[20] = "Jafrina";

    int len_a = strlen(a);

    int len_b = strlen(b);

    int length = len_a + len_b;

    // printf("%d", length);

    for (int i = len_a, j = 0; i < length; i++, j++)
    {
        a[i] = b[j];
    }

    a[length] = '\0';

    printf("%s \n%s", a, b);

    return 0;
}

// --------Example-2: Concat string using strcat() method
#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "Najifa ";

    char b[20] = "Jafrina";

    strcat(a, b);

    printf("%s \n%s", a, b);

    return 0;
}



// ***** 11.5: Lexicopraphical Order ******



// ***** 11.6: String Compare ******
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100] = "air";

    char b[100] = "airplane";

    int cmp = strcmp(b, a);
    // int cmp = strcmp(a, b);

    printf("%d", cmp);

    return 0;
}


// ***** 11.7: String Reverse ******
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "abcd";

    int len = strlen(str);

    for(int i = 0, j = len - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("%s", str);

    return 0;
}


// -------Example-2:
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "banglasesh";
    char str2[20];

    strcpy(str2, str);

    int len = strlen(str);

    for (int i = 0, j = len - 1; i <= j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("%s %s", str2, str);

    return 0;
}


/*
ট্রিকি কুইজগুলো এখানে এক্সপ্লেইন করে দেওয়া আছে। তারপরও কোথাও ডাউট থাকলে কুইজের উত্তর শো 
করে গ্রুপে পোস্ট না করে সাপোর্ট সেশনে জয়েন হয়ে ক্লিয়ার হয়ে নিয়েন। 
https://docs.google.com/document/d/1kYj83R3mniTY99aVaMW0FZ-Ic7U3g8cd7SMHltZkgpA/edit?tab=t.0

*/ 





/***********************
 ******* Week03 ********
 **** Conceptual-01 ****
 **********************/ 
//------------ CodeExaple-1:Insert c 2 number index

#include <stdio.h>
#include <string.h>

int main()
{
    char word[8];

    scanf("%s", word);

    for (int i = 6; i >= 2; i--)
    {
        word[i + 1] = word[i];
    }

    word[2] = 'c';

    printf("%s", word);

    return 0;
}

//------------ CodeExaple-2: Delect c 2 number index

#include <stdio.h>
#include <string.h>

int main()
{
    char word[8];

    scanf("%s", word);

    for (int i = 3; i <= 6; i++)
    {
        word[i] = word[i + 1];
    }

    printf("%s", word);

    return 0;
}

/**************
Given a number N and an array A of N numbers. Print the array in a reversed order.
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
**************/ 
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    int left = 0, right = n-1;

    while(left < right){
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        left++;
        right--;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}


/**************
Given a number N and an array A  of N numbers. Determine if it's palindrome or not.
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
**************/ 
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

    int l = 0, r = n - 1;

    int pal = 1;

    while (l <= r)
    {

        if (a[l] != a[r])
        {
            pal = 0;
            break;
        }

        l++; // l k shamner dike niye gesi
        r--; // r k pechoner dike niye ashchi
    }

    if (pal == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

/************** SUM DIGITS **********************
Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
************************************************/ 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char num[n + 1];

    scanf("%s", num);

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int digit = num[i] - '0';
        sum = sum + digit;
    }

    printf("%d", sum);

    return 0;
}







/***********************
 ******* Week03 ********
 **** Conceptual-02 ****
 **********************/ 
/*
    Problem: Way Too Long Words 
    https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char str[105];
        scanf("%s", str);

        int len = strlen(str);

        if (len > 10)
        {
            printf("%c%d%c\n", str[0], len - 2, str[len - 1]);
        }
        else
        {
            printf("%s\n", str);
        }
    }

    return 0;
} 

/*
    Problem: Conversion
    https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char S[100005];
    scanf("%s", S);

    int len = strlen(S);

    for (int i = 0; i < len; i++)
    {
        if (S[i] == ',')
        {
            S[i] = ' ';
        }
        else if (S[i] >= 'A' && S[i] <= 'Z')
        {
            S[i] = S[i] + 32;
        }
        else if (S[i] >= 'a' && S[i] <= 'z')
        {
            S[i] = S[i] - 32;
        }
    }

    printf("%s", S);

    return 0;
}


/*
    Problem: Palindrome String
    https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char S[1005];
    scanf("%s", S);

    int len = strlen(S);

    int i = 0;
    int j = len - 1;
    int isPalindrome = 1;
    while (i <= j)
    {
        if (S[i] != S[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}




/***********************
 ******* Week03 ********
 *** Practice Day-01 ***
 **********************/ 
// 😡😡😡  Reversing 😡😡😡  
#include <stdio.h>

int a[100000];

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int pal = 1;

    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}



// 😡😡😡 Palindrome Array 😡😡😡 
#include <stdio.h>

int a[100000];

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int pal = 1;

    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (a[i] != a[j])
        {
            pal = 0;
            break;
        }
    }

    if (pal == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}


// 😡😡😡  Way Too Long Words 😡😡😡  
// (See Conceptual session Two)


// 😡😡😡  Conversion 😡😡😡  
// (See Conceptual session Two)



// 😡😡😡  Palindrome String 😡😡😡  
// (See Conceptual session Two)





/***********************
 ******* Week03 ********
 *** Practice Day-02 ***
 **********************/ 
/*
    😡😡😡 Compare 😡😡😡
    https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
    [Note: In C, you can use the strcmp function to compare two strings 
    lexicographically. The function returns a negative number if the first
    string is lexicographically smaller, zero if they are equal, and a 
    positive number if the first string is lexicographically larger.]

*/ 
#include <stdio.h>
#include <string.h>

int main()
{
    char X[21];
    char Y[21];

    scanf("%s %s", X, Y);

    
    if (strcmp(X, Y) < 0)
    {
        printf("%s", X);
    }
    else
    {
        printf("%s", Y);
    }

    return 0;
}



/*
    😡😡😡 Count 😡😡😡
    https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
*/  

