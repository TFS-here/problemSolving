#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
      int t;
      cin>>t;
      while(t--)
      {
          int n;
          cin>>n;
          int a[n];
          for(int i=0;i<n;i++)
          {
              cin>>a[i];

          }
          if(n==1)cout<<216<<endl;
          else if(n==2)cout<<168<<endl;
          else if(n==3)cout<<126<<endl;
          else if(n==4)cout<<90<<endl;
          else if(n==5)cout<<60<<endl;
          else if(n==6)cout<<36<<endl;
          else if(n==7)cout<<18<<endl;
          else if(n==8)cout<<6<<endl;
          else if(n==9)cout<<0<<endl;
      }
      return 0;

}
