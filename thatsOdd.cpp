#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,i,j,res=0,leave=0,right=0,left=0;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		res+=a[i];
	}
	sort(a,a+n);
	for(i=3;i<=n;i+=2){
		leave=i/2;
		for(j=leave;j<=n-leave-1;j++){
			right=n-j-1;
			left=n-right-1;
			if(i==3){
				res+=(a[j]*right*left);
			}
			else{
				res+=((right*(right-1)/leave)*(left*(left-1)/leave)*(a[j]));
			}
		}
	}
	cout<<res<<endl;
}
