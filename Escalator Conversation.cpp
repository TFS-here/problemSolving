#include <bits/stdc++.h>
using namespace std;
// int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, H, ans = 0;
        cin >> n >> m >> k >> H;
        int h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
            if (((abs(H - h[i])) % k == 0)&&((abs(H - h[i]))<m))
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}