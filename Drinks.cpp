#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,a;
    double result=0,r=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        r+=a;
    }
    result=r/n;
    cout<<fixed<<setprecision(12)<<result<<endl;
    return 0;
}
