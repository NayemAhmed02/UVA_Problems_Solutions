#include<bits/stdc++.h>
using namespace std;

#define SIZE 5001
#define SIZ 1060

int Febonacci[SIZE][SIZ];

int main()
{
    int input,sum,re,j,i;

    Febonacci[0][0] = 0;
    Febonacci[1][0] = 1;

    for(i=2; i<SIZE; i++)
    {
        re = 0;
        for(j=0; j<SIZ; j++)
        {
            sum = Febonacci[i-1][j] + Febonacci[i-2][j] + re;

            if(sum > 9)
            {
                Febonacci[i][j] = sum % 10;
                re = sum / 10;
            }
            else
            {
               Febonacci[i][j] = sum;
                re = 0;
            }
        }
    }
    while(scanf("%d", &input) != EOF)
    {
        for(i=j-1; i>0; i--)
            if(Febonacci[input][i] != 0) break;
        printf("The Fibonacci number for %d is ",input);
        for(; i>=0; i--)
            printf("%d",Febonacci[input][i]);
        printf("\n");
    }

    return 0;
}
