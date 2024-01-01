#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    vector<string>t;
    for(int i=1;i<(s.size())/2-2;i+=3)
    {
        if(s[i]!='}')
        {
            t.push_back(s[i]);

        }

    }
}
