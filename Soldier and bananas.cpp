#include<iostream>
using namespace std;
int main()
{
    int k,n,w,s=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
     s+=i*k;

    }
    if(s<=n)
    cout<<0<<endl;
    else
        cout<<s-n<<endl;
    return 0;
}
