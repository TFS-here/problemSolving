#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    if(n%2==0)
    cout<<4<<" "<<n-4<<endl;
    else
    cout<<9<<" "<<n-9<<endl;
    return 0;
}