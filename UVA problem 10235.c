#include<stdio.h>
#include<math.h>

int main()
{
    int N,M,R,R1,reverse,P,E,V,i,j;

    while(scanf("%d", &N) != EOF)
    {
        R = sqrt(N);
        M = N;
        P = 0;
        E = 0;
        reverse = 0;
        for(i=2; i<=R; i++)
        {
            if(N % i == 0)
            {
                P = 1;
                break;
            }
        }
        while(N > 0)
        {
            V = N % 10;
            reverse = (reverse * 10) + V;
            N = N / 10;
        }
        R1 = sqrt(reverse);
        for(j=2; j<=R1; j++)
        {
            if(reverse % j == 0)
            {
                E = 1;
                break;
            }
        }
        if(P == 0)
        {
            if(E == 1 || reverse == M)
                printf("%d is prime.\n",M);
            else
                printf("%d is emirp.\n",M);
        }
        else
            printf("%d is not prime.\n",M);
    }
    return 0;
}

