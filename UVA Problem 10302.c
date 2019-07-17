#include<stdio.h>

int main()
{
    long long int N;
    while(scanf("%lld", &N) != EOF)
    {
       N = (N*(N+1))/2;
       N = N*N;
       printf("%lld\n",N);
    }
    return 0;
}
