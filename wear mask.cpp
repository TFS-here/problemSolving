#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,ans=1;
        cin>>w>>h;
        if(w==h)
        {
            ans=(w*h)/9;
        }
        else
        {
            if(w>h)
            {
                ans=(h*h)/9+(w-h)-((w-h)/3);
            }
           else if(w<h)
            {
               ans=(w*w)/9+sqrt((h-w)*9);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
