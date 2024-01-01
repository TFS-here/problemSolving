#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        if(s=="yes"||s=="Yes"||s=="yEs"||s=="yeS"||s=="YEs"||s=="yES"||s=="YeS"||s=="YES")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
