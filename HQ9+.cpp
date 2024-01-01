#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'||s[i]=='+')
            {
                cout<<"YES"<<endl;
                count++;
                break;
            }
    }
    if(count==0)cout<<"NO"<<endl;
return 0;

}
