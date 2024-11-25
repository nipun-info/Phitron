/*
Question-1: Solve
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }

    return 0;
}

/*
  Question-2: Solve
*/
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int zeroCount = 0, oneCount = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x == 0)
        {
            zeroCount++;
        }
        else if (x == 1)
        {
            oneCount++;
        }
    }

    printf("%d %d", zeroCount, oneCount);

    return 0;
}

/*
  Question-3: Solve
*/
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;

    scanf("%d", &x);

    x = x - 1;
      
    for(int i=0; i<N; i++){
        if(arr[x] == 0 ){            
            arr[x] =  1;
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
  Question-4: Solve
*/
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}


/*
  Question-5: Solve
*/
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;

    scanf("%d", &n);

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int min = INT_MAX, max = INT_MIN;

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
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", max - ar[i]);
    }

    return 0;
}



