#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t="samsung";
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }

  bool found = s.find(t) != std::string::npos;
   if (found)
        cout<<"SRBD"<<endl;
    else
        cout<<"GHOST"<<endl;
        return 0;
}
