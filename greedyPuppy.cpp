#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i,n,k,maxi=-1,coin=0;
		cin>>n>>k;
		for(i=1;i<=k;i++){
			coin=n%i;
			maxi=max(maxi,coin);
		}
		cout<<maxi<<endl;
	}
}
