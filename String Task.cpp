#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
   string a,l;
   cin>>a;
   int s=a.length();

   for(int i=0;i<s;i++)
   {
       a[i]=towlower(a[i]);
       if(a[i]=='a'||a[i]=='o'||a[i]=='i'||a[i]=='y'||a[i]=='e'||a[i]=='u')
        continue;
       else
       {
           l+='.';
           l+=a[i];

       }
   }
   cout<<l<<endl;
   return 0;
}
