#include<bits/stdc++.h>
using namespace std;

#define SIZE 20000001

bool Number[SIZE];
int twin[SIZE];

void sieve()
{
    int squareroot;
    memset(Number, true, sizeof(Number)); // All elements are assigned by 0

    for(int i=4; i<=20000000; i+=2)
        Number[i] = false;
    squareroot = sqrt(20000000);
    squareroot++;
    for(int i=3; i<=squareroot; i+=2)
    {
        int k = i+i;
        for(int j=i*i; j<=20000000; j+=k)
        {
            Number[j] = false;
        }
    }
}

void twin_prime()
{
    int i, j = 1;
    for( i = 3;  i < SIZE-1; i++){
        if(Number[i]==true && Number[i+2]==true)
        {
            twin[j++] = i;
        }
    }
}

int main()
{
    long long int S;

    sieve();
    twin_prime();

    while(cin >> S)
    {
        cout<<"("<<twin[S]<<","<<' '<<twin[S]+2<<")\n";
    }
    return 0;
}
