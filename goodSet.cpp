#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,num=1;
		cin>>n;
		for(i=0;i<n;i++){
			cout<<num<<" ";
			num+=2;
		}
		cout<<endl;
	}
}
