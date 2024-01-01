#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       if(n==3)
        cout<<"-1"<<endl;
       else
       {
               cout<<n-1<<" "<<n<<" ";

               for(int i=n;i>0;i--)
               {
                   if(i==n||i==n-1)continue;

                  else
                    cout<<i<<" ";
                  }
                   cout<<endl;
                  }
   }

    return 0;
}
