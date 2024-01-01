#include<iostream>
using namespace std;
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,w,x,y,z;
    string t;
    cin>>t>>d1;
    cin>>h1>>t>>m1>>t>>s1;
    cin>>t>>d2;
    cin>>h2>>t>>m1>>t>>s2;
    w=d1-d2;
    x=h1-h2;
    y=m1-m2;
    z=s1-s2;
   if(z<0)
   {
    z+=60;
   y--;
}
   if(y<0)
   {
       y+=60;
      x--;
   }
   if(x<0)
   {
       x+=
   }


}
