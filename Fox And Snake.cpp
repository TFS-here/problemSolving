#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            cout<<"#";
            if(i%2!=0)
            {
                if(i==3||(i-3)%4==0)
                {
                    if(j==0)
                        cout<<"#";
                    else
                        cout<<".";
                }
              else
               {
                if(j==m-1)
                    cout<<"#";
                    else
                        cout<<".";}
                }

            }
        cout<<endl;
    }
    return 0;
}
