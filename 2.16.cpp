#include<bits/stdc++.h>
using namespace std;

//Bismillahir Rahmanir Rahim
//--------------------------------------------------------------
#define  ll             long long
#define  nl             "\n"
#define  cin(arr)       int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
#define  in(v)          vector<ll>v(n);for(int i=0;i<n;i++)cin>>v[i];
#define  cout(arr)      for(int i=0;i<n;i++)cout<<arr[i]<<" ";
#define  out(v)         for(int i=0;i<n;i++)cout<<v[i]<<" ";
#define  arrsort(arr)   sort(arr,arr+n);
#define  vsort(v)       sort(v.begin(),v.end());
#define  pi             2 * acos (0.0)
const int N=1e5+10;     int dp[N];
#define  faster         ios_base::sync_with_stdio(false); cin.tie(NULL);
//--------------------------------------------------------------
//ABU JAFOR MUHAMMAD SALEH

int fib(int n){
    if(n<=1)return n;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=fib(n-1)+fib(n-2);
}



int main(){
    faster;

int tc; cin>>tc;
while(tc--){
 int n ; cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int mx=*max_element(arr,arr+n);
int mn=*min_element(arr,arr+n);

int a=count(arr,arr+n,mx);
int b=count(arr,arr+n,mn);

 if(a==n or b==n){
    ll t=0;
  for(int i=n-1;i>=1;i--){
    t+=i*2;
  }
  cout<<t<<nl;
}
else
cout<<((a*b)*2)<<nl;

}

}
