#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a=1,b=2,c=3;
    for(float I=0;I<=2.2;I+=0.2)
    {
        cout<<"I="<<I<<" J="<<a<<endl;
        cout<<"I="<<I<<" J="<<b<<endl;
        cout<<"I="<<I<<" J="<<c<<endl;
        a+=0.2;
        b+=0.2;
        c+=0.2;
    }
    return 0;
}

