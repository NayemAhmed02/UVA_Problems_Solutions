#include<bits/stdc++.h>
using namespace std;

#define SIZE 32100

int main()
{
    long long int num1,num2,squareroot,de,l,M,j,temp,number[SIZE],prime[SIZE];

    // Now First I find the all prime number between 1 to 32100

    memset(number, 0, sizeof(number)); // all elements are assigned to 0

    for(int i=4; i<32100; i=i+2)
        number[i] = 1;
    squareroot = sqrt(32100);
    squareroot++;
    for(int i=3; i<=squareroot; i=i+2)
    {
        int k = i+i;
        for(int j=i*i; j<32100; j=j+k)
        {
            number[j] = 1;
        }
    }
    number[1] = 1;
    number[0] = 1;

    //Then start take input

    while(cin>>num1>>num2)
    {
        if(num1 == 0 && num2 == 0) break;
        else if(num1 > num2)
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        j = 0;

        //make a serial of all primes between 1 to 32100

        for(int i=0; i<32100; i++)
        {
            if(number[i] == 0)
            {
                prime[j] = i;
                j++;
            }
        }

        //Find the determinate primes of given range

        for(int i=0; i<j-2; )
        {
            if(prime[i]-prime[i+1] == prime[i+1]-prime[i+2])
            {
                l = i;
                M = 0;
                de = prime[i] - prime[i+1];
                i = i+2;
                for( ; i<j-1; i++)
                {
                    if((prime[i]-prime[i+1]) == de) M++;
                    else break;
                }
                if(prime[l] >= num1 && prime[i] <= num2)
                {
                    while(l < i)
                    {
                        cout<<prime[l]<<' ';
                        l++;
                    }
                    cout<<prime[i]<<"\n";
                }
            }
            else i++;
        }
    }
    return 0;
}

