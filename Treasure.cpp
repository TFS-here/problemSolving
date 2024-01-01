#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        string s;
        cin>>s;
        if(s=="out")n--;
        if(s=="in")n++;
        if(n<4){
            count=1;
        break;}
    }

    if(count==1)
        cout<<"YES"<<endl;
    else if(count==0)
        cout<<"NO"<<endl;
    return 0;
}
