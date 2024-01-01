#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int y;
        for(int i=0;;i++)
        {
        if((x&i)>0&&(x^i)>0)
            y=i;
            break;
        }
    cout<<y<<endl;
    }

    return 0;
}
