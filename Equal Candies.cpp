#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        cin>>a[j];
            sort(a,a+n);
            int c=0;
            for(int j=1;j<n;j++)
                c+=a[j]-a[0];

        cout<<c<<endl;
    }
}
