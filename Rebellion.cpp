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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        int j=n-1;
        int i=0,count=0;
        while(i<j){
                //cout<<a[j]<<"\t"<<j<<endl;
            if(a[j]==1)j--;
            else if(a[i]==1&&a[j]==0){
                count++;i++;j--;
            }
            else if(a[i]==1&&a[j]==1){
                i++;j--;
            }

            else
                i++;
        }
      cout<<count<<endl;
    }
    return 0;
}
