#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp=0;
        cin>>a>>b>>c>>d;
        if(b>a)
            temp+=1;
        if(c>a)
            temp+=1;
        if(d>a)
            temp+=1;

            cout<<temp<<endl;
    }
    return 0;
}
