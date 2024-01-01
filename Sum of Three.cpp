#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a=1,b=2,c=0;
        cin>>n;
        if(n<=6) cout<<"NO"<<"\n";
        else if(n<=9&&n%3==0)
        {
            cout<<"NO"<<"\n";
        }
        
        
        else if(n%3==0)
        {
            cout<<"YES"<<"\n";
            cout<<a<<" "<<b+2<<" "<<n-5<<endl;
             
        }
        else
        {
            cout<<"YES"<<"\n";
            cout<<a<<" "<<b<<" "<< n-3<<"\n";
        }
       
    
    }
    return 0;
}