#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<int> v={2,3,6,5,4};
    cout<<"Given vector: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    cout<<"After push_back: ";
    v.push_back(2);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    cout<<"After pop_back: ";
    v.pop_back();
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    cout<<"After insert 3: ";
    v.insert(v.begin()+1,3);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    cout<<"After erase : ";
    v.erase(v.begin()+3);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    
     cout<<"After clear : ";
    v.clear();
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
