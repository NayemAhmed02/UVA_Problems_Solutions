#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;

    while(scanf("%d", &testcase) != EOF)
    {
        for(int i=1; i<=testcase; i++)
        {
            int N,K,P;
            scanf("%d %d %d", &N, &K, &P);

            int result = K + P;

            while(result > N)
                result = result - N;
            printf("Case %d: %d\n",i,result);

        }
    }
    return 0;
}
