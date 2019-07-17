#include<bits/stdc++.h>
using namespace std;

int L;
queue<int> Side[2];

void Solve()
{
    int Count = 0, sd = 0;
    while (!Side[0].empty() || !Side[1].empty())
    {
        int curLen = 0;
        while (!Side[sd].empty())
        {
            int len = Side[sd].front();
            if (len + curLen <= L)
            {
                curLen += len;
                Side[sd].pop();
            }
            else
                break;
        }
        Count++;
        sd = 1-sd;
    }
    printf("%d\n", Count);
}

int main()
{
    int Case, len, m;
    char bank[10];
    scanf("%d", &Case);
    while (Case--)
    {
        Side[0] = Side[1] = queue<int>();
        scanf("%d %d", &L, &m);
        L *= 100;
        while (m--)
        {
            scanf("%d %s", &len, &bank);
            if (!strcmp(bank, "left"))
                Side[0].push(len);
            else
                Side[1].push(len);
        }
        Solve();
    }
    return 0;
}

