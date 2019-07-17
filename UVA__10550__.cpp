#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,n3,n4;

    while (scanf("%d %d %d %d", &n1, &n2, &n3, &n4) != EOF)
    {
        if(n1==0 && n2==0 && n3==0 & n4==0) return 0;
        int ans = 1080 + ((n1 - n2 + 40) % 40 + (n3 - n2 + 40) % 40 + (n3 - n4 + 40) % 40) * 9;
        printf("%d\n",ans);
    }
    return 0;
}
