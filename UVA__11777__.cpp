#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;

    while(scanf("%d", &testcase) != EOF)
    {
        for(int i=1; i<=testcase; i++)
        {
            int term1,term2,Final,attendance,ct[3];

            scanf("%d %d %d %d", &term1, &term2, &Final, &attendance);
            scanf("%d %d %d", &ct[0], &ct[1], &ct[2]);

            sort(ct, ct+3);

            int sum = term1 + term2 + Final + attendance;
            int ct_mark = (ct[1] + ct[2]) / 2;

            sum += ct_mark;

            if(sum >= 90) printf("Case %d: A\n",i);
            else if(sum >= 80) printf("Case %d: B\n",i);
            else if(sum >= 70) printf("Case %d: C\n",i);
            else if(sum >= 60) printf("Case %d: D\n",i);
            else printf("Case %d: F\n",i);
        }
    }
    return 0;
}
