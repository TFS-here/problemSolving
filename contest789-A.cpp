#include<iostream>
using namespace std;
int main()
{
    int t,n;
    string a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            cout<<a[j]<<a[j+1]<<endl;
        }
    }

}
