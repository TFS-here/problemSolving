#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 1) cnt++;
        }
        if (cnt < 3) {
            cout << "NO" << endl;
            continue;
        }
        bool f = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if ((a[i] + a[j] + a[k]) % 2 == 1) {
                        cout << "YES" << endl;
                        cout << i+1 << " " << j+1 << " " << k+1 << endl;
                        f = true;
                        break;
                    }
                }
                if (f) break;
            }
            if (f) break;
        }
        if (!f) cout << "NO" << endl;
    }
    return 0;
}