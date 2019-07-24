#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		long long num,s=0,mini=INT_MAX;
		for(i=0;i<n;i++){
			cin>>num;
			s+=num;
			mini=min(mini,num);
		}
		cout<<s-n*mini<<endl;
	}
}
