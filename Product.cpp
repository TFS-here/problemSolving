#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
bool compare(int a, int b) {
    return a > b;
}
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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int max=1;
        sort(a,a+n,compare);
        for(int i=0;i<n;i++)
        {
            if(a[i]<1)a[i]=0;
            max=a[0]*a[1]*a[2];
        }
        cout<<max<<endl;
    
    }
    return 0;
}