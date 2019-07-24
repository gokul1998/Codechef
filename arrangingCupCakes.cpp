#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long lim,diff,n,i,mini=INT_MAX,num;
		cin>>n;
		lim=sqrt(n);
		for(i=1;i<=lim;i++){
			num=n/i;
			if(num*i==n){
				diff=abs(num-i);
				mini=min(mini,diff);
			}
		}
		cout<<mini<<endl;
	}
}
