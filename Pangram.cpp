#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),:: tolower);
    sort(s.begin(),s.end());
    cout<<s<<endl;
    for(int i=0;i<s.size();i++)
    {
        if('s[i]'<97&&'s[i]'>123){
        if('s[i]'=='s[i+1]')
            continue;
        else
            flag++;

        }
    }
    if(flag==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
