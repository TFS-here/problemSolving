#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long a,b,count=0;
    cin>>a>>b;
    for (int i = a; i <= b; i++) {
        if (i == 1 || i == 0)
            continue;
        int flag = 1;
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            count++;
    }
    cout<<count<<endl;
    }
    return 0;
}
