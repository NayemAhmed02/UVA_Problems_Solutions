#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int Z,I,M,L,testcase=1;
    while(cin>>Z>>I>>M>>L)
    {
        if(Z==0&&I==0&&M==0&&L==0) break;
        long long int same,coun=0;
        map<long long,int>mp;
        while(1)
        {
            same=((Z*L)+I)%M;
            mp[same]++;
            if(mp[same]==2) break;
            L=same;
            coun++;
        }
        printf("Case %lld: %lld\n",testcase++,coun);
    }
    return 0;
}
