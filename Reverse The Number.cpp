#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int i=0;

    while (i < s.length() && s[i] == '0') {
        s.erase(i, 1);
    }
    cout<<s<<endl;
   }
    return 0;
}
