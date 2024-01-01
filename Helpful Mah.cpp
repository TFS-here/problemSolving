#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i,k;
    cin>>s;
    for(i=0;i<s.size();i+=2)
    {
        for(k=0;k<s.size()-1;k+=2)
        {
            if(s[k]>s[k+2])
                swap(s[k],s[k+2]);
        }
    }
    cout<<s<<endl;
    return 0;

}

