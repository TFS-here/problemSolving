#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,result=0;
    cin>>n;
   if(n%2==0)
    result=(n/2);
   else if(n%2!=0)
    result=-(n+1)/2;
   cout<<result<<endl;
    return 0;
}
