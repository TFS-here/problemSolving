#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,ans=0;
        cin>>a>>b>>c;
        if(a==b&&b==c) cout<<1<<" "<<1<<" "<<1<<endl;
        else
        {
            if(a>b&&a>c){
                cout<<0<<" "<<(a-b)+1<<" "<<(a-c)+1<<endl;
            }
            else if(b>a&&b>c){
                cout<<(b-a)+1<<" "<<0<<" "<<(b-c)+1<<endl;
            }
            else if(c>a&&c>b){
                cout<<(c-a)+1<<" "<<(c-b)+1<<" "<<0<<endl;
            }
        }

    
    }
    return 0;
}