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
        string a, b, c;
        char ans;
        cin >> a >> b >> c;
        for (int i = 0; i < 3; i++)
        {
            if (a[i] == '?')
            {
                sort(a.begin(), a.end());
                if (a[1] == 'B')
                    ans = 'A';
                else if (a[1] == 'A' && a[2] == 'B')
                    ans = 'C';
                else if (a[1] == 'A' && a[2] == 'C')
                    ans = 'B';
            }

            else if (b[i] == '?')
            {
                sort(b.begin(), b.end());
                if (b[1] == 'B')
                    ans = 'A';
                else if (b[1] == 'A' && b[2] == 'B')
                    ans = 'C';
                else if (b[1] == 'A' && b[2] == 'C')
                    ans = 'B';
            }
            else if (c[i] == '?')
            {
                sort(c.begin(), c.end());
                if (c[1] == 'B')
                    ans = 'A';
                else if (c[1] == 'A' && c[2] == 'B')
                    ans = 'C';
                else if (c[1] == 'A' && c[2] == 'C')
                    ans = 'B';
            }
        }
        cout << ans << "\n";
    }
    return 0;
}