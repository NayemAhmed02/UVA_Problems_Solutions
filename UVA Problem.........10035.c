#include<stdio.h>

int main()
{
    long long int num1,num2,carry,totalcarry;
    while(scanf("%lld %lld", &num1, &num2) != EOF)
    {
        if(num1 == 0 && num2 == 0) break;
        carry = 0;
        totalcarry = 0;
        while(num1 > 0 || num2 > 0)
        {
            carry = ((num1 % 10) + (num2 % 10) + carry) / 10;
            printf("car= %lld\n",carry);
            num1 = num1 / 10;
            num2 = num2 / 10;
            totalcarry = totalcarry + carry;
        }
        if(totalcarry == 0) printf("No carry operation.\n");
        else if(totalcarry == 1) printf("1 carry operation.\n");
        else printf("%lld carry operations.\n",totalcarry);
    }
    return 0;
}
