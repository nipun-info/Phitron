// Solve-1:

#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}






// -------- solution:3
#include <stdio.h>

int main()
{
    int n;
    long long x, y;

    scanf("%d %lld %lld", &n, &x, &y);

    // printf("%d %lld %lld", n, x, y);

    int phonePrice[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &phonePrice[i]);
    }

    int availablePhones = 0;

    for (int i = 0; i < n; i++)
    {
        if (phonePrice[i] >= x && phonePrice[i] <= y)
        {
            // printf("%d ", phonePrice[i]);
            availablePhones++;
        }
    }
    printf("%d", availablePhones);

    return 0;
}



// -------- solution-5:
#include <stdio.h>
#include <string.h>

int main()
{
    char S1[1002], S2[1002], S3[1002];

    scanf("%s %s %s", S1, S2, S3);

    // printf("%s %s %s", S1, S2, S3);

    // int cmp = strcmp(S1, S2);
    // printf("%d \n", cmp );

    char minimumStr[1002];
    strcpy(minimumStr, S1);

    if (strcmp(S2, minimumStr) < 0)
    {
        strcpy(minimumStr, S2);
    }
    if (strcmp(S3, minimumStr) < 0)
    {
        strcpy(minimumStr, S3);
    }

    char maximunStr[1002];
    strcpy(maximunStr, S1);

    if (strcmp(S2, maximunStr) > 0)
    {
        strcpy(maximunStr, S2);
    }
    if (strcmp(S3, maximunStr) > 0)
    {
        strcpy(maximunStr, S3);
    }

    printf("%s\n", minimumStr);
    printf("%s\n", maximunStr);

    return 0;
}
