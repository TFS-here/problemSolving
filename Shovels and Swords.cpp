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
        int a,b,ans=0;
        cin>>a>>b;
        int c=min(a,b);
        if(a>c){
            if(a>=c*2)ans=c;
            else
             ans=a/2+((a-c)%3);
        }
        else if(b>=c){
            if(b>=c*2)ans=c;
            else
             ans=b/2+((b-c)%3);
        }
        cout<<ans<<endl;
    
    }
    return 0;
}