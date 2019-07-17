#include<bits/stdc++.h>
using namespace std;

int main()
{
    double m,h,angle,ma,ha;

    while((scanf("%lf:%lf",&h,&m)) != EOF)
    {
        if((h==0)&&(m==0))
            return 0;

        ha=h*30+(m/60)*30;
        ma=m*6;
        angle=(ha-ma);
        if(angle<0)
            angle*=-1;
        if(angle>180)
            angle=360-angle;
        printf("%.3lf\n",angle);
    }
    return 0;
}
