#include<iostream>
using namespace std;
double pluss(double a, double b)
{
    return a+b;
}
double devide(double a, double b)
{
    return a/b;
}
double multiple(double a, double b)
{
    return a*b;
}
double difference(double a, double b)
{
    return a-b;
}

int main()
{
    double a,b;
    char operation;
    cin>>a>>operation>>b;
    switch(operation)
    {
        case '+':
            cout<<pluss(a,b)<<endl;
            break;

        case '-':
            cout<<difference(a,b)<<endl;
            break;

        case '*':
            cout<<multiple(a,b)<<endl;
            break;

        case '/':
             cout<<devide(a,b)<<endl;
            break;

        default:
           cout<<"Error! operator is not correct"<<endl;
    }
    return 0;

}
