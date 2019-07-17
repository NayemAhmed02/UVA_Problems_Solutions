#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Initial,Final;

    while(scanf("%d %d", &Initial, &Final) != EOF)
    {
        if(Initial == -1 && Final == -1) break;

        int up_press,down_press;

        if(Final >= Initial)
        {
            up_press = Final - Initial;
            down_press = Initial + 1 + (99 - Final);

            if(up_press <= down_press) printf("%d\n",up_press);
            else printf("%d\n",down_press);
        }
        else
        {
            up_press = (99-Initial) + 1 + Final;
            down_press = Initial - Final;

            if(up_press <= down_press) printf("%d\n",up_press);
            else printf("%d\n",down_press);
        }
    }
    return 0;
}
