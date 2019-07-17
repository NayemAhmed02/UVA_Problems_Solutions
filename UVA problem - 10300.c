#include<stdio.h>

int main()
{
    long long int result,i,t,f,ar[3];

    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld", &f);
        result = 0;
        for(i=0; i<f; i++)
        {
            scanf("%lld %lld %lld", &ar[0],&ar[1],&ar[2]);
            result = result + (ar[0] * ar[2]);
        }
        printf("%lld\n",result);
    }
    return 0;
}
