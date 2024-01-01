#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],ans=0;
    cin>>a[0]>>a[1]>>a[2];
    if(a[0]!=1&&a[1]==1&&a[2]!=1){
            if(a[0]>a[2]){
            a[2]+=a[1];

          ans+=a[0]*a[2];}
          else if(a[0]<a[2]){
            a[0]+=a[1];

          ans+=a[0]*a[2];}
    }
    else{

    for(int i=0;i<3;i++)
    {

        if(a[i]==1||ans==1){

            ans+=a[i];
        }
        else
        {if(ans==0)ans=1;
            ans*=a[i];
        }
    }
    }
    cout<<ans<<endl;

return 0;
}
