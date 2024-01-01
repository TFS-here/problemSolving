#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n],flag=0;
    for(int i=0;i<n;i++)
    {

        cin>>a[i];

    }
    sort(a,a+n);

    for(int i=0;i<n;i++)
    {

        if(a[i]!=a[i+1])
        {flag++;

        }

        //cout<<a[i]<<" "<<flag<<endl;
    }



    cout<<flag-1<<endl;
    return 0;

}
