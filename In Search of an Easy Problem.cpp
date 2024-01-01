#include<iostream>
using namespace std;
int main()
{
    int n,a[100],sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            sum++;
    }
    if(sum>0)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    return 0;
}
