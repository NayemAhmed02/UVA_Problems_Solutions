#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;

    while(scanf("%d", &testcase) != EOF)
    {
        int num,condition,sum,re;
        for(int i=1; i<=testcase; i++)
        {
            scanf("%d", &num);
            int number = num;
            condition = 2;

            while(1)
            {
                sum = 0;
                while(num > 0)
                {
                    re = num % 10;
                    sum += (re*re);
                    num /= 10;
                }
                if(sum==1 || sum==7 || sum==10)
                {
                    condition = 1;
                    break;
                }
                else if(sum==49 || sum==97 || sum==130)
                {
                    condition = 1;
                    break;
                }
                else if(sum==4 || sum==16 || sum==20 || sum==89)
                {
                    condition = 0;
                    break;
                }
                else if(sum==37 || sum==42 || sum==58 || sum==145)
                {
                    condition = 0;
                    break;
                }
                else num = sum;

            }
            if(condition == 0) printf("Case #%d: %d is an Unhappy number.\n",i,number);
            else printf("Case #%d: %d is a Happy number.\n",i,number);

        }
    }
    return 0;
}
