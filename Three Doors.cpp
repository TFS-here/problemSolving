#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int a[3];
        int flag=0;
        for(int i=0;i<3;i++)
        {
            cin>>a[i];}
            while(x!=0)
            {
                x=a[x-1];
                flag++;
            }
            cout<<flag<<"l"<<endl;;


    }
    return 0;
}
