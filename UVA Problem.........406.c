#include<stdio.h>
#include<math.h>

int main()
{
    int range,number,squareroot,prime,to,from,print,i,j,k,allprime[1100];

    while(scanf("%d %d", &range, &number) != EOF)
    {
        k = 0;
        for(i=1; i<=range; i++)
        {
            prime = 1;
            squareroot = sqrt(i);
            for(j=2; j<=squareroot; j++)
            {
                if(i % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
            if(prime == 1)
            {
                allprime[k] = i;
                k++;
            }
        }
        if(k % 2 == 0) print = 2 * number;
        else print = (2 * number) - 1;

        from = (k - print) / 2;
        to = k - from;

        printf("%d %d:",range,number);

        if(print >= k)
            for(i=0; i<k; i++) printf(" %d",allprime[i]);
        else
            for(i=from; i<to; i++) printf(" %d",allprime[i]);

        printf("\n\n");
    }
    return 0;
}
