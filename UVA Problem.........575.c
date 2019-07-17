#include<stdio.h>
#include<string.h>

int main()
{
    char input[100];
    long long int decimal,length,p,re,i,j;

    while(scanf("%s", &input) != EOF)
    {
        length = strlen(input);
        if(length == 1 && input[0] == '0') break;
        p = length;
        decimal = 0;
        for(i=0; i<length; i++)
        {
            re = 1;
            for(j=0; j<p; j++)
                re = re * 2;
            decimal = decimal + ((input[i] - 48) * (re - 1));
            p--;
        }
        printf("%lld\n",decimal);
    }
    return 0;
}
