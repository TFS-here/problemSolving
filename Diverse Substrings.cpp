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
        int n,count=1;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
           int a[10];
           int flag=0;
            for(int j=i;j<n;j++)
            {
                int b=s[j]-'0';
                if(a[b] == 0) { 
                  flag++;  
                } 
                a[b]++;
                if(max_element(a,a+10)<=flag){
                    count++;
                }
            }
            
        }
        cout<<count-1<<endl;
    
    }
    return 0;
}