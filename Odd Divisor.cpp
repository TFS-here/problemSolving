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
        long long n,flag=0;
        cin>>n;
        if(n<2) flag=0;
        if(n==3)flag=1;
        else{
        for(long long i=3;i*i<n;i+=2)
        {
            if(n%i==0){
                flag=1;
                break;
            }
        }
        }
        if(flag==1)cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    
    }
    return 0;
}