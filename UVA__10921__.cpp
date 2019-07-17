#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[40];

    while(scanf("%s", &str) != EOF)
    {
        int i = 0;
        while(str[i])
        {
            if(str[i]=='-' || str[i]=='0' || str[i]=='1') printf("%c",str[i]);
            else if(str[i]>='A' && str[i]<='C') printf("2");
            else if(str[i]>='D' && str[i]<='F') printf("3");
            else if(str[i]>='G' && str[i]<='I') printf("4");
            else if(str[i]>='J' && str[i]<='L') printf("5");
            else if(str[i]>='M' && str[i]<='O') printf("6");
            else if(str[i]>='P' && str[i]<='S') printf("7");
            else if(str[i]>='T' && str[i]<='V') printf("8");
            else if(str[i]>='W' && str[i]<='Z') printf("9");
            i++;
        }
        printf("\n");
    }
    return 0;
}
