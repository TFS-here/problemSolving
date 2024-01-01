#include<iostream>
using namespace std;
int main()
{
    int n,p,q,temp=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>q;
        if(p<q)
            temp++;
    }
   cout<<temp;
    return 0;
}
