#include<stdio.h>
#include<math.h>

int main()
{
    long long int Number,Divider,tester,p,Divisor[1000];

    while(scanf("%lld %lld", &Number, &Divider) != EOF)
    {
        tester = Divider;
        p = 0;
        Divisor[p] = Divider;

        if(Divider < 2 || Number == 0 || Divider > Number)
            printf("Boring!\n");

        else
        {
            while(tester < Number)
            {
                tester = tester * Divider;
                p++;
                Divisor[p] = tester;
            }
            if(tester == Number)
            {
                while(p >= 0)
                {
                    printf("%lld ",Divisor[p]);
                    p--;
                }
                printf("1\n");
            }
            else printf("Boring!\n");
        }

    }
    return 0;
}
