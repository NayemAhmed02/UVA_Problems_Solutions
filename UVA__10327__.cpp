#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ar[2000],sum;

    while(scanf("%d", &n) != EOF)
    {
        for(int i=0; i<n; i++)
            scanf("%d", &ar[i]);

        sum = 0;

        for(int i=0; i<n-1; i++)
        {
            int cou = 0;
            for(int j=i+1; j<n; j++)
            {
                if(ar[j] < ar[i]) cou++;
            }
            sum += cou;
        }
        printf("Minimum exchange operations : %d\n",sum);
    }
    return 0;
}
