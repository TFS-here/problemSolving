#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        bool flag=false;
        int a[6];
        for(int i=0;i<6;i++)
        {
            cin>>a[i];
        }
        
        if((a[0]!=a[2])&&(a[2]!=a[3])&&(a[2]!=a[4]))flag=true;
        else if((a[1]!=a[3])&&(a[1]!=a[5])&&(a[3]!=a[5]))flag=true;
        else
        flag=false;

        flag==true?cout<<"YES"<<endl:cout<<"NO"<<endl;

    }
    return 0;
}
