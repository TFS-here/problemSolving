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
        string a;
        cin>>a;
        int sum=0;
        if(a[0]=='1')sum=1;

        for(int i=1;i<n;i++)
        {
            if(a[i]=='0')
            {
                cout<<"+";
            }
            else if(a[i]=='1')
            {
                if(sum>0)
                {cout<<"-";
                sum-=1;
                }
                else
                {
                    cout<<"+";
                    sum+=1;
                }
            }

        }

    cout<<endl;

    }
    return 0;
}
