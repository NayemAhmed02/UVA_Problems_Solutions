#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[2000];
    int length,start,i;

    while(gets(str))
    {
        length = strlen(str);
        start = 0;
        for(i=0; i<length; i++)
        {
            if(str[i] == 32)
            {
                for(int j=i-1; j>=start; j--)
                    cout<<str[j];
                cout<<" ";
                start = i+1;
            }
        }
        for(int j=length-1; j>=start; j--)
            cout<<str[j];
        cout<<"\n";
    }
    return 0;
}
