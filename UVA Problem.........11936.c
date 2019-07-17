#include<stdio.h>

int main()
{
    int testcase,num1,num2,num3;

    while(scanf("%d", &testcase) != EOF)
    {
        while(testcase--)
        {
            scanf("%d %d %d", &num1, &num2, &num3);
            if((num1+num2)>num3 && (num2+num3)>num1 && (num1+num3)>num2)
                printf("OK\n");
            else printf("Wrong!!\n");
        }
    }
    return 0;
}
