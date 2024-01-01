#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,a=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        a++;
    }
        cout<<a<<endl;
    return 0;
}
