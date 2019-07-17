#include<stdio.h>

int main()
{
    long long int testcase,num,copynum,term,R,reverse;

    scanf("%lld", &testcase);

    while(testcase--)
    {
        scanf("%lld", &num);
        term = 0;
        copynum = num;
        while(1)
        {
            reverse = 0;
            while(num > 0)
            {
                R = num % 10;
                reverse = (reverse * 10) + R;
                num = num / 10;
            }
            if(copynum == reverse) break;
            else
            {
                copynum = copynum + reverse;
                num = copynum;
                term++;
            }
        }
        printf("%lld %lld\n",term,copynum);
    }
    return 0;
}
