
/******************************************************
🪴🪴🪴🪴 MO-1: Basic C++ 🪴🪴🪴🪴
*******************************************************/

// 🪂🪂🪂🪂 Welcome to C++ For DSA

// 🪂🪂🪂🪂 Introduction and Setup

// 🪂🪂🪂🪂 How to Print in C++
#include <iostream>

int main()
{
    std ::cout << "Nipun!!! \n";

    int x = 10;
    double y = 35.655;
    char c = 'A';

    std ::cout << x << " " << y << " " << c << "\n\n";

    std ::cout << x << std::endl
               << y << std::endl
               << c << std::endl;

    std::cout << "My FAV ID is " << x;
    return 0;
}

// 🪂🪂🪂🪂 How to take input in C++, Typecasting
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char c;
    double d;
    int ascii = 'A';

    // input from file
    cin >> x >> y >> c >> d;

    cout << x << endl
         << y << endl
         << c << endl
         << d << endl;
    cout << ascii;

    return 0;
}

// ******** TypeCasting Example
#include <iostream>
using namespace std;

int main()
{
    // Typecasting
    char c = 'a';
    int y = 65;
    cout << "Character: " << c << endl
         << "Convert Int: " << (int)c << endl;
    cout << y << endl
         << (char)y;

    return 0;
}

// 🪂🪂🪂🪂 EOF and Setprecision in C++
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Example: EOF
    int x;
    while (cin >> x)
    {
        cout << x << endl;
    }

    // Example: setprecision

    double d = 23.45678;
    cout << fixed << setprecision(3) << d << endl;

    return 0;
}

// 🪂🪂🪂🪂 If else and Ternary Operator
#include <iostream>
using namespace std;

int main()
{
    /*
    int x = 15;

    if(x % 2 == 0)
    {
        cout << "Even\n";
    }
    else
    {
        cout << "Odd\n";
    }
    */

    //***** Ternary Operator

    int x;
    cin >> x;

    x % 2 == 0 ? cout << "Even\n" : cout << "Odd\n";

    return 0;
}

// 🪂🪂🪂🪂 Switch in C++

// 🪂🪂🪂🪂 Min, Max, Swap

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // if(a < b)
    // {
    //     cout << a << endl;
    // }
    // else {
    //     cout << b << endl;
    // }

    // find minimum number of two numbers
    cout << min(a, b) << endl;

    // find max number of two numbers
    cout << max(a, b) << endl;

    // find minimum number of multiple numbers
    cout << min({3, 5, 8, 9, 75}) << endl;

    // find maximum number of multiple numbers
    cout << max({3, 5, 8, 9, 75}) << endl;

    return 0;
}

// -------- swapping the value
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // int temp = a;
    // a = b;
    // b = temp;

    swap(a, b);

    cout << a << " " << b << endl;

    return 0;
}

// 🪂🪂🪂🪂 String in C++
#include <iostream>
using namespace std;

int main()
{
    char s[100];

    cin >> s;
    cout << s << endl; // print: Hello

    cin.getline(s, 100);
    cout << s << endl; // print: Hello world

    return 0;
}

// -------- example-2:
#include <iostream>
using namespace std;

int main()
{
    int x;

    cin >> x;

    cin.ignore();

    char s[100];

    cin.getline(s, 100);

    cout << x << endl
         << s << endl;

    return 0;
}

// 🪂🪂🪂🪂 Summary and bits header file
#include <bits/stdc++.h>

/******************************************************
🪴🪴🪴🪴 MO-2: Dynamic Memory Allocation 🪴🪴🪴🪴
*******************************************************/

// 🪂🪂 Static vs Dynamic Memory 🪂🪂

/*
https://chatgpt.com/c/673b1bd2-51c4-8007-b49b-94d4a9eb28f9
    Stack               |   Heap
    Static              |   Dyanamic
    Compile Time        |   Run Time
    Limited Memory      |   More Memory
    Auto memory clear   |   User Instructed

*/

// 🪂🪂 Dynamic Variable 🪂🪂
// ----------- Example-01
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Allocate memory for an integer
    int *p = new int;

    // Assign a value to the allocated memory
    *p = 100;

    cout << *p << endl;

    // Free the allocated memory
    delete p;

    return 0;
}

// ----------- Example-02
#include <bits/stdc++.h>
using namespace std;

int *p;

void func()
{
    // Static variable
    // int x = 10;
    // p = &x;
    // cout << "Fun -> " << *p << endl;

    // Dynamic variable
    int *x = new int;
    *x = 100;
    p = x;
    cout << "Fun -> " << *p << endl;
}

int main()
{
    func();

    cout << "Main -> " << *p << endl;

    return 0;
}

// 🪂🪂 Dynamic Array 🪂🪂
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // allocate menory for an array of intergers
    int *a = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    // Free the allocated memory
    delete[] a;

    return 0;
}

// 🪂🪂 Dynamic Array Return From Function 🪂🪂
#include <bits/stdc++.h>
using namespace std;

int *func1()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    return a;
}

int main()
{
    int *x = func1();
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << "\n";
    }

    return 0;
}

// 🪂🪂 Increase Size of Dynamic Array 🪂🪂
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a[3];
    // int b[5];

    int *a = new int[3];
    int *b = new int[5];

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }

    b[3] = 90;
    b[4] = 200;

    delete[] a;

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " " << endl;
    }

    return 0;
}

// 🪂🪂 Summary 🪂🪂

// Search snippet generator: https://snippet-generator.app/
// Select VSCode and input code and copied
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
// go to setting snippet and paste the code and save

/******************************************************
🪴🪴🪴🪴 MO-2:5: Practice Day 🪴🪴🪴🪴
*******************************************************/
/*
    M. Capital or Small or Digit: Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
*/

/*
    C. Simple Calculator: Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
*/

/*
    F. Reversing (solve using swap() function): Given a number N and an array A of N numbers. Print the array in a reversed order.
    https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
*/

/*
    K. Max and Min : Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int minimum = min({a, b, c});
    int maximum = max({a, b, c});

    cout << minimum << " " << maximum << endl;

    return 0;
}

/*
    E. Max (solve using max() function):Given a number N, and N numbers, find maximum number in these N numbers.
    https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // if (a[i] > max)
        //     max = a[i];

        mx = max(a[i], mx);
    }

    cout << mx << endl;

    return 0;
}

/******************************************************
🪴🪴🪴🪴 MO-3: Class and Object in C++ 🪴🪴🪴🪴
*******************************************************/
// 🪂🪂 What is Class and Object 🪂🪂

// 🪂🪂 How to declare class and object 🪂🪂

// 🪂🪂 Working with class and object 🪂🪂
// --------Example-1:
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    // Student a;
    // a.roll = 20;
    // a.gpa = 4.5;
    // char temp[100] = "robin";
    // strcpy(a.name, temp);

    // cout << a.name << " " << a.roll << " " << a.gpa << endl;

    return 0;
}

/*
example-2:
input:
nahid 99 4.58
habib 74 4.98

*/
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    // Student a, b;
    // cin >> a.name >> a.roll >> a.gpa;
    // cin >> b.name >> b.roll >> b.gpa;

    // cout << a.name << " " << a.roll << " " << a.gpa << endl;
    // cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}

// example-2
#include <bits/stdc++.h>
using namespace std;

// Create an array in a function
// initialize its values
// return the array to the main function
// print the array

// class Student
// {
//     public:
//     char name[100];
//     int roll;
//     double gpa;

// };

// int main()
// {
//     Student a, b;
//     cin.getline(a.name, 100);
//     cin >> a.roll >> a.gpa;

//     cin.ignore();

//     cin.getline(b.name, 100);
//     cin >> b.roll >> b.gpa;

//     cout << a.name << " " << a.roll << " " << a.gpa << endl;
//     cout << b.name << " " << b.roll << " " << b.gpa << endl;
//     return 0;
// }

// 🪂🪂 Constructor and its Simulation 🪂🪂
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    // Student rahim(45, 5, 3.2);
    // Student karim(2, 8, 4.2);

    // cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    // cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}

// 🪂🪂 This keyword and Arrow sign 🪂🪂
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        // this->roll = roll;
        // this->cls = cls;
        // this->gpa = gpa;

        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
};

int main()
{
    // Student rahim(40, 5, 3.2);
    // Student karim(2, 8, 4.2);

    // cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    // cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}

// 🪂🪂 Return object from function 🪂🪂
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

// Student fun3()
// {
//     Student rahim(40, 5, 3.2);
//     return rahim;
// }

// int main()
// {
//     Student obj = fun3();
//     cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

//     return 0;
// }

// 🪂🪂 Why we need dynamic object 🪂🪂
// Below code return garbase value
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

// Student *fun2()
// {
//     Student rahim(40, 5, 5.0);
//     Student *p = &rahim;
//     return p;
// }

// int main()
// {
//     Student *p = fun2();
//     cout << p->roll << " " << p->cls << " " << p->gpa << endl;

//     return 0;
// }
// 🪂🪂 Dynamic Object 🪂🪂

// 🪂🪂 Sort function in C++ 🪂🪂

/******************************************************
🪴🪴🪴🪴 WeeK01-Conceptual-01 🪴🪴🪴🪴

Topics:
Pointer Recap
1. Pointer Definition
2. Derafarencing / Accessing the value
3. Pointer of an Array

Dynamic Memory Allocation:

1. Stack memory and Heap memory
2. Dynamic variable allocation with visualization
    - declaration
    - input / Output
3. Dynamic array allocation with visualization
    - declaration
    - input / Output
4. Why we need Dynamic Array?
    - memory allocation / deallocation
    - function
5. Array in a function
*******************************************************/

// 🦋.....Example🦋: Pointer Definition
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;

    cout << &a << endl; // a er address print korbe

    int *a_ptr = &a; // a er address রাখবে

    cout << a_ptr << endl; // a er address print korbe

    return 0;
}

// 🦋.....Example🦋: Dereferencing / accessing the value
using namespace std;

int main()
{
    int a = 10;

    // Before Deferanceing
    cout << a << endl;
    int *a_ptr = &a;

    // after Deferanceing
    *a_ptr = 15;
    cout << *a_ptr << endl;

    return 0;
}

// 🦋.....Example🦋: Pointer of An Array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {20, 30, 40, 50, 10};

    cout << &arr[0] << endl;
    cout << arr << endl;

    cout << &arr[1] << endl;
    cout << arr + 1 << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << (arr + i) << endl;  // ar er address ta print korbe
        cout << *(arr + i) << endl; // ar er value ta print korbe
    }

    return 0;
}

// 🦋.....Example🦋: Stack memory and Heap memory
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *ar = new int;

    *ar = 15;

    cout << ar << endl;
    cout << *ar << endl;

    delete ar;

    return 0;
}

// 🦋.....Example🦋: Dyanamic variable input / Output
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int;

    cin >> *a;

    cout << *a << endl;

    return 0;
}

// 🦋.....Example🦋: https://pythontutor.com/render.html#mode=display

// 🦋.....Example🦋: Dynamic array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *arr = new int[3];

    *arr = 10;
    *(arr + 1) = 20;
    *(arr + 2) = 30;

    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << endl;
    }

    delete[] arr;

    return 0;
}

// 🦋.....Example🦋: Why need dynamic array (with visiualization )
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *arr = new int[3];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    int arr1[5];

    for (int i = 0; i < 3; i++)
    {
        arr1[i] = arr[i];
    }

    delete[] arr;
    arr1[3] = 12;
    arr1[4] = 13;

    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << endl;
    }

    return 0;
}

// 🦋.....Example🦋 Array in function video show again

/******************************************************
🪴🪴🪴🪴 MO-5:String Class in C++  🪴🪴🪴🪴
🧜String in C++
🧜String Capacity Functions
🧜String Element Access
🧜String Modifiers
🧜String Iterators
🧜String input with spaces
🧜Stringstream

🗨️NoteOfModule:
Definition: Strings in C++ are objects that represent sequences of characters.
Flexibility: They offer dynamic sizing and easy manipulation of text data
Efficiency: C++ strings provide optimized memory management and performance.

➡️size(): Returns the number of characters in the string
➡️clear(): Delete all the characters in the string
➡️empty(): Check if the string is empty or not.
➡️append(): Adds characters to the end of the string.

Taking Input with Space
➡️getline(): This function reads afull line of text, including spaces.
➡️cin.get(): Reads characters one by one, preserving whitespace.

Stringstream in C++
Purpose: Stringstream allow parsing and formatting of string data.
Functionality: It converts strings to other data types and vice versa.
Usage: Useful for tokenizing strings and performaing complex string operations.

Iterator in C++
Definition: Iterators are objects that point to elements in a container.

Types: Input, output, forward, bidirectional, and random access iterators exist.

Usage: They allow traversal and manipulation of container elements.

https://cplusplus.com/reference/string/string/

📓String built-in functions:
1. Capacity
    s.size() -> returns the size of the string.
    s.max_size() -> returns the maximum size that string can hold.
    s.capacity() -> returns current available capacity of the string.
    s.clear() -> clear the string.
    s.empty() -> return true/false if the string is empty.
    s.resize() -> change the size of the string.

2. Element access
    S[i] -> access the ith index of the string.
    s.at(i) -> access the ith index of the string.
    s.back() -> access the last element of the string.
    s.front() -> access the first element of the string.

3. Modifiers
    s+= -> append another string.
    s.append() -> append another string.
    s.push_back() -> add character to the last of the string.
    s.pop_back() -> remove the last character of the string.
    s= -> assign string.
    s.assign() -> assign string.
    s.erase() -> erase characters from the string.
    s.replace() -> replace a portion of the string.
    s.insert() -> insert a portion to a specific position.

4. Iterators
    s.begin() -> pointer to the first element.
    s.end() -> pointer to the next element after the last element of the string.

*******************************************************/

// 🧜String in C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "work";
    s = "hard working";

    cout << s << endl;

    return 0;
}

// ------example 2:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Before compare two char string
    char s[10] = "Hard";
    char s2[10] = "Hard";

    if (strcmp(s, s2) == 0)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Different" << endl;
    }

    // But using string object
    string S = "Work";
    string S2 = "Work";

    if (S == S2)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Different" << endl;
    }

    return 0;
}

// 🧜String Capacity Functions
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hard working for dream work";

    cout << s.capacity() << endl;

    return 0;
}

//🎆------ Example: size and clear() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str  = "Hard working for dream work";

    cout << str.size() << endl;

    str.clear();
    cout << str.size() << endl;

    if(str.empty() == true)
    {
        cout << "Empty" << endl;
    }
    else 
    { 
        cout << "Not Empty" << endl;
    }

    return 0;
}

//🎆------ Example: resize() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hard working for dream work";
    str.resize(4);
    cout << str << endl;
    str.resize(30, 'X');

    cout << str << endl;

    return 0;
}


// 🧜String Element Access
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    cout << "Full Str: " << str << endl;
    cout << "0th index Letter: " << str[0] << endl;
    cout << "4th index Letter: " << str[4] << endl;
    cout << "0th index Letter: " << str.at(0) << endl;
    cout << "last index Letter: " << str[str.size() - 1] << endl;
    cout << "last index Letter: " << str.back() << endl;
    cout << "First index Letter: " << str.front() << endl;

    return 0;
}


// 🧜String Modifiers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string strOne = "Nasihul ";
    string strTwo = "Nipun";

    // strOne += strTwo;
    strOne.append(strTwo);  // <- same-> strOne += strTwo;
    cout << strOne << endl;

    // strOne.push_back('S');
    strOne += 'N'; // <- same-> strOne.push_back('S');
    cout << strOne << endl;


    // 😀😂
    string strOne = "Nasihul";
    cout << strOne << endl;
    
    strOne.pop_back();
    strOne.pop_back();

    cout << strOne << endl;

    // 😀😂
    string s = "Phitron";
    string s2 = "Programming Hero";

    // s = s2;
    s.assign("CodeAcademy"); // or-> s = s2;

    cout << s << endl;

    // 😀😂
    string s = "Phitron";
    // s.erase(4);
    s.erase(4, 2);

    cout << s << endl;

    // 😀😂
    string s = "Phitron";
    // s.replace(10, 5, "Programming");
    s.insert(0, "Programming");

    cout << s << endl;

    return 0;
}



// 🧜String Iterators
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Bangladesh";
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    // cout << *s.begin() << endl;
    // cout << *(s.end() - 1) << endl;

    // for (string:: iterator it = s.begin(); it < s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    

    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}



// 🧜String input with spaces
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // cin >> s;
    getline(cin, s);
    cout << s << endl;

    return 0;
}

// ------example:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string s;
    cin.ignore();

    getline(cin,s);

    cout << x << endl;
    cout << s << endl;

    return 0;
}


// 🧜Stringstream
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;

    stringstream ss(s);
    string word;

    ss >> word;
    cout << word << endl;

    ss >> word;
    cout << word << endl;

    ss >> word;
    cout << word << endl;

    // 👌
    while (ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}


// 🧜Extra practise link: https://docs.google.com/document/d/14sdQIgBZV29d8cSMPfMasotAc_jhZNgxaqRSOG_yR1c/edit?tab=t.0


/******************************************************
🪴🪴🪴🪴 MO-6: More about class and string  🪴🪴🪴🪴
🧜Introduction
🧜String Constructor
🧜Sort string using sort() function
🧜Range based for loop
🧜Reverse function in C++
🧜Reverse word codeforces solution
🧜Function inside class
🧜Copy dynamic object

*******************************************************/

// *******🧜String Constructor
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 😅 ---- Way-1:
    string s("Hello");
    cout << s << endl;

    // 😅 ---- Way-2:
    string s("Hello", 4);
    cout << s << endl;  // print first 4 letter:>> Hell

    // 😅 ---- Way-3:
    string s = "Hello World";
    string t(s, 4);

    cout << t << endl;  // print all letter without firt 4 letter:>> o World

    // 😅 ---- Way-3:
    string s(5, 'N');
    cout << s << endl;  // print input character:>> NNNNN


    return 0;
}

// *******🧜Sort string using sort() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // cin >> s;
    getline(cin, s);

    sort(s.begin(), s.end());

    cout << s << endl;  

    return 0;
}

// *******🧜Range based for loop
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // cin >> s;
    getline(cin, s);

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    for (char c : s)
    {
        cout << c << endl;
    }

    return 0;
}

// *******🧜Reverse function in C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // reversing the array
    reverse(a, a+n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
}

// 😴---Example:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // cin >> s;
    getline(cin, s);
    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}

// *******🧜Reverse word codeforces solution
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
// 🗽Solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    ss >> word;

    reverse(word.begin(), word.end());
    cout << word;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }

    return 0;
}

// *******🧜Function inside class
// ---------- Example-01:
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    void hello()
    {
        cout << "Hello From " << name << " " << roll << endl;
    }
};

int main()
{
    // Student sakib("Sakib Ahmed", 23);
    // sakib.hello();

    // Student rakib("Rakib Ahmed", 28);
    // rakib.hello();
    // cout << sakib.name << " " << sakib.roll << endl;

    return 0;
}

// 😆----- Example:02
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total()
    {
        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};

int main()
{
    Student sakib("Sakib Ahmed", 23, 85, 92);
    sakib.total();

    Student rakib("Rakib Ahmed", 28, 65, 95);
    rakib.total();

    return 0;
}



// *******🧜Copy dynamic object
#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    string country;
    int jersey;

    Cricketer(string country, int jersey){
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{
    Cricketer* dhoni = new Cricketer("India", 100);
    Cricketer* kohli = new Cricketer("India", 18);
    
    // kohli->country = dhoni->country;
    // kohli->jersey = dhoni->jersey;

    *kohli = *dhoni;

    // cout << dhoni->jersey << " " << kohli->jersey << endl;
    delete dhoni;
    cout << kohli->country << " " << kohli->jersey << endl;

    return 0;
}





/******************************************************
🪴🪴🪴🪴 Conceptual Session:Week02_Co   🪴🪴🪴🪴
🧜Introduction
 // 🪂🪂 Introduction 🪂🪂
*******************************************************/








/******************************************************
🪴🪴🪴🪴 MO-7:   🪴🪴🪴🪴
🧜Introduction
 // 🪂🪂 Introduction 🪂🪂
*******************************************************/