#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,i=1;
    while(scanf("%d", &num) != EOF)
    {
        double u,v,t,s,a;
        if(num == 0) break;
        else if(num == 1)
        {
            scanf("%lf %lf %lf", &u, &v, &t);
            s = ((v+u) / 2) * t;
            a = (v-u) / t;
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
        }
        else if(num == 2)
        {
            scanf("%lf %lf %lf", &u, &v, &a);
            t = (v-u) / a;
            s = ((v+u) / 2) * t;
            printf("Case %d: %.3lf %.3lf\n",i,s,t);
        }
        else if(num == 3)
        {
            scanf("%lf %lf %lf", &u, &a, &s);
            v = (u*u) + 2*a*s;
            v = sqrt(v);
            t = (v-u) / a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }
        else if(num == 4)
        {
            scanf("%lf %lf %lf", &v, &a, &s);
            u = (v*v) - 2*a*s;
            u = sqrt(u);
            t = (v-u) / a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }
        i++;
    }
    return 0;
}
