#include<bits/stdc++.h>
using namespace std;

long long int res(long long int x, long long int y)
{
    int sum = 0, n;
    sum = (y*(y+1))/2;
    n = x;
    sum += (2*(2+y)+n-1)*n/2;
    return sum;
}
int main()
{
    int n, C = 0;
    scanf("%d", &n);
    while(n--)
    {
        long long int x1, x2, y1, y2;
        scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);

        long long int t1, t2, Ans;
        t1 = res(x1, y1);
        t2 = res(x2, y2);
        Ans = t1-t2;
        if(Ans < 0) Ans *= -1;

        printf("Case %d: %lld\n", ++C, Ans);
    }
    return 0;
}
