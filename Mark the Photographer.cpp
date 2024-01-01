#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int h[2*n];

        for(int i=0;i<2*n;i++)
        {
            cin>>h[i];
        }
        sort(h,h+(2*n));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(h[i+n]-h[i]>=x)
                ans++;
        }
       if(ans==n){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;}

    }
    return 0;
}
