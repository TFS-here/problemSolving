#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int t=1;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i-1])
            {
           t++;
           if(t==7)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

            }
    }

    return 0;
}
