#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char str[10];

    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            cin>>str;

            int len = strlen(str);

            if(len > 3) printf("3\n");
            else if(str[0] == 't' && str[1] == 'w') printf("2\n");
            else if(str[0] == 't' && str[2] == 'o') printf("2\n");
            else if(str[2] == 'o' && str[1] == 'w') printf("2\n");
            else printf("1\n");
        }
    }
    return 0;
}
