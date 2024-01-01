#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;

bool C(char ch) {
    return ch == 'b' || ch == 'c'||ch=='d';
}
bool V(char ch) {
    return ch == 'a' || ch == 'e';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++) {
        cout << s[i];

        if (i + 1 < n) {

            if ((V(s[i])&&C(s[i+1])&&V(s[i+2]))||(C(s[i])&&C(s[i+1]))) {
                cout << '.';
            }
        }
    }
    cout<<endl;

    }
    return 0;
}
