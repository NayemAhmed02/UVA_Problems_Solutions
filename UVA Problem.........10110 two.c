#include<stdio.h>
#include<math.h>

int main()
{
    long long int Number,squareroot;

    while(scanf("%lld", &Number) != EOF)
    {
        if(Number == 0) break;
        squareroot = sqrt(Number);

        if((squareroot * squareroot) == Number) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
