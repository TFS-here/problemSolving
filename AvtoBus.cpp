#include<iostream>
using namespace std;
int main()
{
    long long t,n,x,y,z=-1,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n&1|| n<4)
        {
            cout<<"-1"<<endl;
        }
        else{
        y=n/4;
        x=n/6+(bool)(n%6);
        cout<<x<<" "<<y<<endl;}

            }
    return 0;
}
