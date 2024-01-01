#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][2];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin>>arr[i][j];
        }
    }
    int c=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==j) continue;
            if ( arr[i][0]==arr[j][1] )
                c++;
        }
    }

    cout<<c;

    return 0;
}

