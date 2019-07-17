#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    int N,K,X;

    while(scanf("%d", &testcase) != EOF)
    {
        for(int i=1; i<=testcase; i++)
        {
            scanf("%d %d %d", &N, &K, &X);

            int total = (N *(N+1)) / 2;
            int KX = K + X - 1;
            int extra = ((KX * (KX+1)) / 2) - ((X * (X-1)) / 2);
            total -= extra;

            printf("Case %d: %d\n",i,total);
        }
    }
    return 0;
}
