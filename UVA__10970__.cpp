#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,column;

    while(scanf("%d %d", &row, &column) != EOF)
    {
        int total1 = (row-1) + (row * (column - 1));
        int total2 = (column-1) + (column * (row - 1));

        if(total1 <= total2) printf("%d\n",total1);
        else printf("%d\n",total2);
    }
    return 0;
}
