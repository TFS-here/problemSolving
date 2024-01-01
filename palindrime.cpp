#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    int count=0,j=s.size();cout<<j<<endl;
    for(int i=0;i<j;i++)
    {cout<<s[i]<<"\t"<<s[j-1]<<endl;
        if(s[i]!=s[j-1])
        {
            count++;
            break;
        }
        j++;
    }
   // if(count==0)cout<<"YES"<<endl;
    //else
        //cout<<"NO"<<endl;
}
