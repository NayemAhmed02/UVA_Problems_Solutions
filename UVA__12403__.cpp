#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    char str[10];

    while(scanf("%d", &testcase) != EOF)
    {
        int amount,total_amount = 0;
        while(testcase--)
        {
            scanf("%s", &str);

            if(strcmp(str, "donate") == 0)
            {
                scanf("%d", &amount);
                total_amount += amount;
            }
            else
                printf("%d\n",total_amount);
        }
    }
    return 0;
}
