#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int n;
    int a[1010];

    while (scanf ("%d", &n) != EOF)
    {
        if(n == 0)
            break;

        bool space = false;

        for (int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i< n; i++)
        {
            if (a [i] )
            {
                if (space)
                    printf(" ");
                space = true;
                printf ("%d",a[i]);
            }
        }

        if (!space )
            printf("0");

        printf("\n");
    }

    return 0;
}
