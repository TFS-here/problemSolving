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
        int n;
        cin>>n;
        string s;
        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1]){
            s.erase(i, 1);
            i--;
            }
        }
    if(s=="meow")
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }


    return 0;
}
