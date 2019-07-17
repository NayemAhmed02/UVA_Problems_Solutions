#include<stdio.h>

int main()
{
    long long int Num1,Num2,Sum,carry,R1,R2,Totalcarry;

    while(scanf("%lld %lld", &Num1, &Num2) != EOF)
    {
        if(Num1 == 0 && Num2 == 0) break;
        carry = 0;
        Totalcarry = 0;
        while(Num1 > 0 || Num2 > 0)
        {
            R1 = Num1 % 10;
            R2 = Num2 % 10;
            Num1 = Num1 / 10;
            Num2 = Num2 / 10;
            Sum = R1 + R2 + carry;
            if(Sum > 9)
            {
                Totalcarry++;
                carry = 1;
            }

        }
        if(Totalcarry == 0) printf("No carry operation.\n");
        else if(Totalcarry == 1) printf("1 carry operation.\n");
        else printf("%lld carry operations.\n",Totalcarry);
    }
    return 0;
}
