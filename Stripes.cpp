#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        for(int i=0;i<8;i++){
        string s;
        cin>>s;
        if(s.compare("RRRRRRRR")==0)count++;}
        if(count==0)cout<<"B"<<endl;
        else cout<<"R"<<endl;
    }
    return 0;
}

