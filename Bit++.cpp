#include<iostream>
#include<string>
using namespace std;
int main()
{

int n,y(0),i;
string x;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>x;
    if(x[1]=='+')
    {
        ++y;
    }
    else
    {
        --y;
    }
}
cout<<y<<endl;
    return 0;
}

