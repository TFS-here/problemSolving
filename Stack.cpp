#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
#define n 100

class stack{
    int *arr;
    int top;
    
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1)
        {
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;

    }
    void pop(int x)
    {
        if(top==-1)
        {
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }
    void Top(int x)
    {
        if(top==-1)
        {
            cout<<"No element to pop"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top==-1;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    stack st;
    st.push(1);
    st.push(4);
    cout<<st.top<<endl;
    return 0;
}