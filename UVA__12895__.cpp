#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase,num,digits[11];

    while(scanf("%d", &testcase) != EOF)
    {
        while(testcase--)
        {
            scanf("%d", &num);

            int i = 0;
            int number = num;
            double new_number = 0;

            while(num > 0)
            {
                int re = num % 10;
                digits[i++] = re;
                num /= 10;
            }
            for(int j=0; j<i; j++)
            {
                new_number += pow(digits[j], i);
            }
            if(new_number == number)
                printf("Armstrong\n");
            else
                printf("Not Armstrong\n");
        }
    }
    return 0;
}
