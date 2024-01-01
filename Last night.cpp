#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, remainder = 0;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++) {

        n = remainder * 10 + (s[i] - '0');
        remainder = n % 5;
    cout <<n<<endl;}

    return 0;
}
