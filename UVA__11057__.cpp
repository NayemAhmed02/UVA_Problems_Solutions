#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    int books[10000];

    while (cin >> N)
    {
        for (int i=0; i<N; i++)
            cin >> books[i];

        sort(books, books + N);

        cin >> M;

        int i = 0, j = N - 1;
        int bI, bJ;

        while (i < j)
        {
            if (books[i] + books[j] < M)
                ++i;
            else if (books[i] + books[j] == M)
            {
                bI = i;
                bJ = j;
                ++i; --j;
            }
            else
                --j;
        }

        cout << "Peter should buy books whose prices are " << books[bI] << " and " << books[bJ] << ".\n\n";
    }
    return 0;
}
