#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i;
		cin>>n;
		long long res=0,a[n],mini=INT_MAX,count=0;
		for(i=0;i<n;i++){
		cin>>a[i];
		mini=min(mini,a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==mini)count++;
		else{
			res+=(mini*a[i]);
		}
	}
	res+=(count-1)*mini;
	cout<<res<<endl;
	}
}
