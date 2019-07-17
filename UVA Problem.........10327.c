#include<stdio.h>

int main()
{
    int N,i,j,temp,exchange,Number[1010];

    while(scanf("%d", &N) != EOF)
    {
        for(i=0; i<N; i++)
            scanf("%d", &Number[i]);
        exchange = 0;
        for(i=0; i<N-1; i++)
        {
            for(j=0; j<N-1; j++)
            {
                if(Number[j] > Number[j+1])
                {
                    temp = Number[j];
                    Number[j] = Number[j+1];
                    Number[j+1] = temp;
                    exchange++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",exchange);
    }
    return 0;
}
