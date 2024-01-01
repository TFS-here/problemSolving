#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int i,s=0;
    for(i=0;i<5;i++)
    {
        cin>>a;

        if(a%2 == 0)
        {
            s++;
        }
    }
    cout<<s<<" valores pares"<<endl;
    return 0;
}
