#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  int a[3];
  for(int i=1;i<=t;i++){
  cin>>a[0]>>a[1]>>a[2];
  if((a[0]+a[1]+a[2])%3==0)
    cout<<"Case "<<i<<": "<<"Peaceful"<<endl;
  else
    cout<<"Case "<<i<<": "<<"Fight"<<endl;
 }
 return 0;
}
