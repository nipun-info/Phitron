/******************************************************
🪴🪴🪴🪴 MO-1:Time and space Complexity   🪴🪴🪴🪴
🧜Why we need to learn time complexity
🧜What is time complexity
🧜How to calculate time complexity
🧜Linear Complexity O(N)
🧜Logarithmic Complexity O(logN)
🧜Sqrt Complexity O(sqrt(N))
🧜Quadratic complexity O(N*N)
🧜Linearithmic complexity O(NlogN)
🧜Best to Worst Complexity
🧜Solving time complextity
🧜How to calculate time from time complexity
🧜Space complexity
🧜Summary
*******************************************************/

// 🧜🧜 Why we need to learn time complexity 🧜🧜
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;

    // using loop
    // for (int i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }

    // using formula
    sum = (n*(n+1))/2;
    cout << sum << endl;
    
    return 0;
}


// 🧜🧜 What is time complexity 🧜🧜
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                flag = 1;
            }
        }

        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}

/*
input:
5 3
1 5 4 3 2
5
3
6

output:
found
found
not found

But online juzz result: time limet execeeded
*/ 


// 🧜🧜 How to calculate time complexity 🧜🧜

/*
    Asymptotic notations:
        - Omega notation()   -> best case
        - Theta notation ()  -> Average case
        - Big O notation (O) -> Worst case

    Rules to calculate time complexity:
        1. Always take the worst case
        2. Ignore the constant


*/

// 🧜🧜 Linear Complexity O(N) 🧜🧜

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;                          //   O(1)
    cin >> n;                       //   O(1)

    for (int i = 1; i <= n; i+=2)   //   O(n)
    {
        cout << i << " ";
    }
    cout << endl;                   // O(1)
    for (int i = 1; i <= n; i++)    // O(n)
    {
        cout << i << " ";
    }
    

    return 0;                       // O(1)
}


// 🧜🧜 Logarithmic Complexity O(logN) 🧜🧜
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;                          //   O(1)
    cin >> n;                       //   O(1)

    for (int i = 1; i <= n; i*=2)   //   O(N)   // -> O(logN)
    {
        cout << i << " ";
    }
  
    return 0;                       // O(1)
}


// 🧜🧜 Sqrt Complexity O(sqrt(N)) 🧜🧜
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;                          //   O(1)
    cin >> n;                       //   O(1)

    for (int i = 1; i <= sqrt(n); i++)    // -> O(sqrt(N))
    {
        cout << i << " ";
    }
  
    return 0;                       // O(1)
}





// 🧜🧜 Quadratic complexity O(N*N) 🧜🧜
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;                          //   O(1)
    cin >> n;                       //   O(1)

    for (int i = 1; i <= n; i++)    // -> O(N * N)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " Hello " << endl;
        }
        
    }
  
    return 0;                       // O(1)
}


// 🧜🧜🧜 Linearithmic complexity O(NlogN) 🧜🧜
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;                          //   O(1)
    cin >> n;                       //   O(1)

    for (int i = 1; i <= n; i++)    // -> O(N)
    {
        for (int j = 0; j < n; j*2) // -> O(logN)
        {
            cout << " Hello " << endl;
        }
        
    }
  
    return 0;                       // O(1)
}
// O(N * logN) => O(NlogN)


// 🧜🧜🧜 Best to Worst Complexity 🧜🧜
/*
N = 1000

Constant        : O(1)              =: 1
Linear          : O(N)              =: 1000
Logarithmic     : O(logN)           =: 10
Square root     : O(sqrt(N))        =: 32
Quadratic       : O(N*N)            =: 1000000
Linearithmic    : O(NlogN)          =: 1000 * 10
*/ 



// 🧜🧜🧜 Solving time complextity 🧜🧜


// 🧜🧜🧜 How to calculate time from time complexity 🧜🧜


// 🧜🧜🧜 Space complexity 🧜🧜


// 🧜🧜🧜 Summary 🧜🧜