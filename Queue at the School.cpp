#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string str;
    cin>>str;
    for(int j=0;j<t;j++)
  {  for(int i=0;i<n-1;i++)
    {if(str[i]=='B'&&str[i+1]=='G')
    {

        char temp;
        temp=str[i];
        str[i]=str[i+1];
        str[i+1]=temp;

        i++;
    }}}
cout<<str;

    return 0;
}
