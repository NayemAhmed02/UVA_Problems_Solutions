#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--) {
        int ax, ay, bx, by, cx, cy, dx, dy;

        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;

        int ans_LL_x, ans_LL_y, ans_UR_x, ans_UR_y;

        ans_LL_x = max(ax, cx);
        ans_LL_y = max(ay, cy);
        ans_UR_x = min(bx, dx);
        ans_UR_y = min(by, dy);

        if(ans_LL_x >= ans_UR_x || ans_LL_y >= ans_UR_y)
            cout << "No Overlap\n";
        else
            cout << ans_LL_x << ' ' << ans_LL_y << ' ' << ans_UR_x << ' ' << ans_UR_y << '\n';

        if(tc) cout << '\n';
    }
    return 0;
}
