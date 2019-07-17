#include<stdio.h>
#include<string.h>

int main()
{
    int testcase,i,j,P,result,length;
    char str[100];
    scanf("%d", &testcase);

    while(testcase--)
    {
        scanf("%s", &str);
        length = strlen(str);
        result = 0;
        for(i=0; i<length; i++)
        {
            if(str[i] == 'O')
            {
                result++;
                P = 1;
                for(j=i+1; j<length; j++)
                {
                    if(str[j] == 'O')
                    {
                        P++;
                        result = result + P;
                    }
                    else break;
                }
                i = j-1;

            }
        }
        printf("%d\n",result);
    }
    return 0;
}
