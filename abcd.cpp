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
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b)
            cout << c << "\n";
        else if (b == c)
            cout << a << endl;
        else if (a == c)
            cout << b << endl;
    }

    return 0;
}