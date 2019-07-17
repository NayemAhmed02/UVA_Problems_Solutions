#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase,num,age[20];

    while(scanf("%d", &testcase) != EOF)
    {
        for(int i=1; i<=testcase; i++)
        {
            scanf("%d", &num);

            for(int j=0; j<num; j++)
                scanf("%d", &age[j]);

            int mid = num / 2;
            printf("Case %d: %d\n",i,age[mid]);
        }
    }
    return 0;
}
