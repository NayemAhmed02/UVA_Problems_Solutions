#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) != EOF)
    {
        if(n == 0) return 0;

        if(n > 100) printf("f91(%d) = %d\n",n,n-10);
        else printf("f91(%d) = 91\n",n);
    }
    return 0;
}
