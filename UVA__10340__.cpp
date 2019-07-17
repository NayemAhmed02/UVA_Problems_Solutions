#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j,k,l,m,count,n;
    char s[100000],t[100000];

    while(scanf("%s %s",s,t) != EOF)
    {
        count=0;
        l=strlen(s);
        m=strlen(t);
        n=0;

        for(i=0; i<l; i++)
        {
            for(j=n; j<m; j++)
                if(s[i]==t[i+j])
                {
                    count++;
                    n=j;
                    break;
                }
        }

        if(count==l)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}

