#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
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
         sort(a,a+n);
         int c=-1;
         for(int i=0;i<n-2;i++)
         {
            if(a[i]==a[i+1]&& a[i]==a[i+2])
                c=a[i];
         }
          cout<<c<<endl;
    }
    return 0;

}
