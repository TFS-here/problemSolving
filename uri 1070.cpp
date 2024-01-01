#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=a;i<a+12;i++)
    {
        if(i%2!=0)
            cout<<i<<endl;
    }
    return 0;
}
