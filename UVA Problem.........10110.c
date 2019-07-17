// It's Noticed by Time limit exceeded

#include<stdio.h>

int main()
{
    int Number,totaldivisor,i;

    while(scanf("%d", &Number) != EOF)
    {
        if(Number == 0) break;
        totaldivisor = 0;

        for(i=1; i<=Number; i++)  // Finding the total divisor of a number including itself
            if(Number % i == 0) totaldivisor++;

        if(totaldivisor % 2 == 0) printf("no\n");
        else printf("yes\n");
    }
    return 0;
}
