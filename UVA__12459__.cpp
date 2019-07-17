#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num;

    while(scanf("%lld", &num) != EOF)
    {
        if(num == 0) break;

        long long int n = 0;
        long long int m = 1;
        long long int ancestors;

        for(int i=1; i<=num; i++)
        {
            ancestors = n + m;
            n = m;
            m = ancestors;
        }
        printf("%lld\n",ancestors);
    }
    return 0;
}
