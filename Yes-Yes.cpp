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
        bool flag=true;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='Y'||s[i]!='e'||s[i]!='s')
            flag=false;
            break;
        }
        if(s.size()==1){
            if(s[0]=='Y'||s[0]=='e'||s[0]=='s')
            flag=true;
            else
            flag=false;
        }
        else if(s.size()==2)
        {
            if(s=="Ye"||s=="es"||s=="sY")
            flag=true;
            else
            flag=false;
        }
        else if(s.size()>=3)
        {
            int a=s.size();
            if(a%3==1&&s[0]==s[a-1]) flag=true;
            else if(a%3==2){
                if(s[0]=='Y'&&s[a-1]=='e')flag=true;
                else if(s[0]=='e'&&s[a-1]=='s')flag=true;
                else if(s[0]=='s'&&s[a-1]=='Y')flag=true;
                else flag=false;
            }
            else if (a%3==0)
            {
                if(s[0]=='Y'&&s[a-1]=='s')flag=true;
                else if(s[0]=='e'&&s[a-1]=='Y')flag=true;
                else if(s[0]=='s'&&s[a-1]=='e')flag=true;
                else flag=false;
            }
        }

        if(flag==true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
    return 0;
}