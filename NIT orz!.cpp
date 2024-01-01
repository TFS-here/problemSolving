#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t--)
    {
        int n,z;
        cin>>n>>z;
        int a[n];
        for( int i=0;i<n;i++)
        {
            cin>>a[i];
            }
            int result =0;
            for(int i=0;i<n;i++)
            {
            a[i]=a[i]|z;
            z=a[i]&z;
            if(result<a[i]||result<z){
            result = max(a[i],z);
            }
            }


        cout<<result<<endl;
    }
}
