#include<stdio.h>

int main()
{
    long long int start,end,big,sequence,longestsequence,temp,i,j;

    while(scanf("%lld %lld", &start, &end) != EOF)
    {
        if(start == 0 && end == 0) break;
        else if(start > end)
        {
            temp = start;
            start = end;
            end = temp;
        }
        longestsequence = 0;
        big = 0;
        for(i=start; i<=end; i++)
        {
            sequence = 0;
            j = i;
            if(j == 1) sequence = 3;
            else
            {
                while(j != 1)
                {
                    if(j % 2 == 0) j = j / 2;
                    else j = (3 * j) + 1;
                    sequence++;
                }
            }
            if(sequence > longestsequence)
            {
                longestsequence = sequence;
                big = i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",start,end,big,longestsequence);
    }
    return 0;
}
