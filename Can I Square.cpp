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
        int n;
        cin >> n;
        long long a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        long long x = sqrt(sum);
        // cout << sum << " " << x << endl;
        if (x * x == sum)
        {
            cout << "YES"
                 << "\n";
        }
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}