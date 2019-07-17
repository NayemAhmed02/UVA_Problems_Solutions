#include<bits/stdc++.h>
using namespace std;

#define SIZE 20000001

int Number[SIZE],prime[SIZE];

int main()
{
    int squareroot,S,l=1;

    // Find The All Prime Number Between 1 to 20000000 By Sieve Of Eratosthenes...

    memset(Number, 0, sizeof(Number)); // All elements are assigned by 0

    for(int i=4; i<=20000000; i+=2)
        Number[i] = 1;
    squareroot = sqrt(20000000);
    squareroot++;
    for(int i=3; i<=squareroot; i+=2)
    {
        int k = i+i;
        for(int j=i*i; j<=20000000; j+=k)
        {
            Number[j] = 1;
        }
    }

    for(int i=3; i<SIZE-1; i++)
    {
        if(Number[i]==0 && Number[i+2]==0)
            prime[l++] = i;
    }
    while(cin >> S)
        cout<<"("<<prime[S]<<","<<' '<<prime[S]+2<<")\n";

    return 0;
}
