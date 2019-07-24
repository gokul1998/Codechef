#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n,k,i,num,res=0,curr,j,sum=0;
	cin>>n>>k;
	ll a[n],b[100001];
	for(i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	for(i=0;i<100000;i++){
		if(b[i]>0){
			for(j=i;j<k-i;j++){
				if(j==i){
					if(b[i]>1){
						res+=(b[i]*b[i]-1)/2;
					}
				}
				else if(b[j]>0)res+=(b[i]*b[j]);
			}
		}
	}
	cout<<res<<endl;
}
