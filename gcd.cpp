#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int gcd(int a, int b)
{
    int result= min(a,b);
    while(result>0){
    if(a%result==0&&b%result==0)
    break;
    result--;
    }
    return result;
    
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a,b;
    cin>>a>>b;

    cout<<" The gcd of "<<a<<" and "<<b<< " is "<< gcd(a,b)<<endl;
    return 0;
}