#include<bits/stdc++.h>
using namespace std;

int main()
{
    double hour,minute,angel;

    while(scanf("%lf : %lf", &hour, &minute) != EOF)
    {
        if(hour==0 && minute==0) break;
        angel = (hour*30) - (minute*6) + (minute/2); // 2 comes from 60/30....60 minute ar jonno 30 degree angel...
        if(angel < 0.0) angel = -(angel);
        if(angel > 180.0) angel = 360.0-angel;
        printf("%.3lf\n",angel);
    }
    return 0;
}
