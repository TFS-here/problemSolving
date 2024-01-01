#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h1,h2,h3;
        cin>>n;
        if(n%3==0)
        {
            h1=(n/3)+1;
            h2=(n/3);
            h3=(n/3)-1;
        }
        else if(n%3!=0)
        {
            h1=(n/3)+2;
            h2=(n-h1)/2+1;
            h3=n-(h1+h2);
        }
        cout<<h2<<" "<<h1<<" "<<h3<<endl;
    }
    return 0;
}
