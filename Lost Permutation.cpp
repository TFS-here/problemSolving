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
        int m,l,max=0;
        cin>>m>>l;
        int a[m];
        set<int>s;
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }
        int flag=1,count=0;
        while(flag)
        {
            if(s.find(flag)!=s.end()){
                flag++;
                continue;
            }
            count+=flag;
            if(count>l)
            {
                cout<<"NO"<<endl;
                break;
            }
            s.insert(flag);

            if(count==l)
            {
                bool temp=false;
                for(int i=1;i<max;i++)
                {
                    if(s.find(i)!=s.end())
                    continue;
                    temp=true;
                    break;
                }
                if(temp==false)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                break;
            }
            flag++
        }
        

    
    }
    return 0;
}