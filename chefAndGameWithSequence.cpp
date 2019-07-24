#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int a[n],even=0,odd=0;
		for(i=0;i<n;i++){
		 cin>>a[i];
		 if(a[i]&1)odd++;
	}
	if(n==1)cout<<"1"<<endl;
	else if(odd&1)cout<<"2"<<endl;
	else cout<<"1"<<endl;
	
	}
}
