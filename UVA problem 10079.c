#include<stdio.h>

int main()
{
    long long int input,output;

    while(scanf("%lld", &input) != EOF)
    {
        if(input < 0) break;
        output = ((input) * (input+1)) / 2;
        printf("%lld\n",output+1);
    }
    return 0;
}
