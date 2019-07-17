#include<bits/stdc++.h>
using namespace std;

#define SIZE 1010

int main()
{
    int testcase,num,arr[SIZE];

    while(scanf("%d", &testcase) != EOF)
    {
        while(testcase--)
        {
            scanf("%d", &num);
            int sum = 0;

            for(int i=0; i<num; i++)
            {
                scanf("%d", &arr[i]);
                 sum += arr[i];
            }
            int average = sum / num;
            int total = 0;

            for(int i=0; i<num; i++)
                if(arr[i] > average) total++;

            double result = (total * 100.0) / num;
            char ch = '%';

            printf("%.3lf%c\n",result,ch);
        }
    }
    return 0;
}
