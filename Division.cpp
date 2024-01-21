#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>=1900)cout<<"Division 1"<<"\n";
        else if(n>=1600&&n<=1899)cout<<"Division 2"<<"\n";
        else if(n>=1400&&n<=1599)cout<<"Division 3"<<"\n";
        else if(n<=1399)cout<<"Division 4"<<"\n";
    }

    return 0;
}