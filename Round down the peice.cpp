#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,m;
    long long ans=0;
    cin>>t;
    while(t--)
    {
        cin>>m;
        int count = 0;
        if(m==0)
            count=1;
        else
            count=floor(log10(m)+ 1);
   ans=m-pow(10,(count-1));
   cout<<ans<<endl;
    }
    return 0;
}
