#include<stdio.h>

int main()
{
    char name1[30],name2[30],ch = '%';
    int i,j,r,sum1,sum2,re1,re2;
    double love;

    while(gets(name1))
    {
        gets(name2);
        i = 0;
        sum1 = 0;
        while(name1[i])
        {
            if(name1[i]>='a' && name1[i]<='z')
                sum1 = sum1 + (name1[i]-96);
            else if(name1[i]>='A' && name1[i]<='Z')
                sum1 = sum1 + (name1[i]-64);
            i++;
        }
        j = 0;
        sum2 = 0;
        while(name2[j])
        {
            if(name2[j]>='a' && name2[j]<='z')
                sum2 = sum2 + (name2[j]-96);
            else if(name2[j]>='A' && name2[j]<='Z')
                sum2 = sum2 + (name2[j]-64);
            j++;
        }
        while(sum1 > 0)
        {
            re1 = 0;
            while(sum1 > 0)
            {
                r = sum1 % 10;
                re1 = re1 + r;
                sum1 = sum1 / 10;
            }
            if(re1 > 9) sum1 = re1;
            else
                break;
        }
        while(sum2 > 0)
        {
            re2 = 0;
            while(sum2 > 0)
            {
                r = sum2 % 10;
                re2 = re2 + r;
                sum2 = sum2 / 10;
            }
            if(re2 > 9) sum2 = re2;
            else
                break;
        }
        if(re1 >= re2)
            love = (re2 * 100.0) / re1;
        else
            love = (re1 * 100.0) / re2;
        printf("%.2lf %c\n",love,ch);
    }
    return 0;

}
