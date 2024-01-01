#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int max=a[0],min=a[0],count=0;
    if(n==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if((a[0]==a[1]))
    {
        min=a[0];
        count=0;
    }
    for(int i=1;i<n;i++)
    {

        if(a[i]>max)
        {
            count++;
            max=a[i];
        }
        else if(a[i]<min)
        {
            count++;
            min=a[i];
        }
    }
//cout<<min<<" "<<max<<endl;
    cout<<count<<endl;
    return 0;
}
