#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    while(cin>>l)
    {
        if(l==0) return 0;
        int num_one = __builtin_popcount(l);
        int bina[40],i=0;
        while(l != 0)
        {
            bina[i++] = l % 2;
            l /= 2;
        }
        printf("The parity of ");
        for(int j=i-1; j>=0; j--)
            cout<<bina[j];
        printf(" is %d (mod 2).\n",num_one);
    }
    return 0;
}
