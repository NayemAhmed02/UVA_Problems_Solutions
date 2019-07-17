#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase,length,width,height;

    while(scanf("%d", &testcase) != EOF)
    {
        for(int i=1; i<=testcase; i++)
        {
            scanf("%d %d %d", &length, &width, &height);
            if(length <= 20 && width <= 20 && height <= 20)
                printf("Case %d: good\n",i);
            else
                printf("Case %d: bad\n",i);
        }

    }
    return 0;
}
