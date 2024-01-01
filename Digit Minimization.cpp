#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    string a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        int b=a.size();
        if(b<=2)
            cout<<a[b-1]<<endl;
        else{

           sort(a.begin(),a.end());

           cout<<a[0]<<endl;
        }
    }
    return 0;
}
