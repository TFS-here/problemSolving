#include<iostream>
using namespace std;
int main()
{
    int x,s;
    cin>>x;
    if(x%5>0)
        s=(x/5)+1;
    else
        s=x/5;
    cout<<s<<endl;
    return 0;
}
