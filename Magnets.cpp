#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	int n,count =1;
	scanf("%d",&n);
    string temp;
		for(int i=0;i<n;i++){
		string val;
		cin>>val;
		if(i ==0){
			temp =val;
			continue;
		}
		if(temp[1]==val[0])
		count++;
		temp=val;}
	printf("%d\n",count);
	return 0;}
