#include<iostream>
using namespace std;
int main()
{
    int n,h,a,temp=0;
    cin>>n>>h;
    while(n--)
    {
        cin>>a;
        if(a>h)
        temp+=2;
        else
            temp++;
    }
    cout<<temp<<endl;
    return 0;
}
