#include<stdio.h>

int main()
{
    long long int member,day,Runingday;

    while(scanf("%lld %lld", &member,&day) != EOF)
    {
        Runingday = member;
        while(Runingday < day)
        {
            member++;
            Runingday = Runingday + member;
        }
        printf("%lld\n",member);
    }
    return 0;
}
