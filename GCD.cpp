#include<bits/stdc++.h>
using namespace std;

ll gcd(ll a, ll b)
{
  if (!a)
    return b;
  return gcd(b % a, a);
}
ll reduceB(ll a, char b[])
{
  ll mod = 0;
  for (int i = 0; i < strlen(b); i++)
    mod = (mod * 10 + b[i] - '0') % a;

  return mod;
}
ll gcdLarge(ll a, char b[])
{
  ll num = reduceB(a, b);
  return gcd(a, num);
}
int main()
{
  long long a;
  char b[100];
  cin>>a>>b;
  if (a == 0)
    cout << b << endl;
  else
    cout << gcdLarge(a, b) << endl;

  return 0;
}
