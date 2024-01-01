#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int temp=0;
        for(int i=1;i<n;i++)
            {
                 if(a[i]%a[0]==0)
                continue;
                  else
                        temp++;
            }
            if(temp>0)
            cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;

    }
    return 0;
}
