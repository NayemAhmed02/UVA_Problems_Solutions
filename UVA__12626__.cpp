#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char str[900];
    cin>>n;
    while(n--)
    {
        cin>>str;
        int M=0,A=0,R=0,G=0,I=0,T=0;
        int len = strlen(str);
        for(int i=0; i<len; i++)
        {
            if((str[i]-48) == ('M'-48)) M++;
            else if((str[i]-48) == ('A'-48)) A++;
            else if((str[i]-48) == ('R'-48)) R++;
            else if((str[i]-48) == ('G'-48)) G++;
            else if((str[i]-48) == ('I'-48)) I++;
            else if((str[i]-48) == ('T'-48)) T++;
        }
        A /= 3;
        R /= 2;
        int ans = min(M, A);
        ans = min(ans, R);
        ans = min(ans, G);
        ans = min(ans, I);
        ans = min(ans, T);
        cout<<ans<<"\n";
    }
    return 0;
}
