#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
int n,m;
cin>>n>>m;
long a[n];
long temp=1,count=0;
for(int i=0;i<m;i++)
{
    cin>>a[i];
}
for (int i = 0; i < m; i++)
{
//cout<<count<<"\t"<<temp<<endl;
    if(temp>n) temp=temp-n;

    if(a[i]<temp){
            count+=(n-temp)+a[i];
    temp=a[i];
    }

    else if(temp<a[i]){
            //cout<<count<<"\t"<<temp<<endl;
            count+=(a[i]-temp);
    temp=a[i];
    }

}
//cout<<count<<"\t"<<temp<<endl;
cout<<count<<endl;

    return 0;
}
//100 100
//56 46 1 47 5 86 45 35 81 1 31 70 67 70 62 99 100 47 44 33 78 35 32 37 92 12 95 18 3 22 54 24 22 90 25 22 78 88 51 92 46 84 15 29 28 40 8 5 93 68 77 47 45 76 85 39 84 94 52 69 93 64 31 60 99 17 51 59 62 37 46 47 86 60 88 14 68 22 47 93 50 10 55 87 46 50 43 63 44 43 61 65 91 43 33 97 67 57 66 70
