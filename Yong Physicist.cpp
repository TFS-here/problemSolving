#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z,temp=0,temp2=0,temp3=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        temp+=x;
        temp2+=y;
        temp3+=z;
    }
    if(temp==0&&temp2==0&&temp3==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
