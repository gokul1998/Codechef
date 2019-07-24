#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,a[3];
		cin>>n>>a[0]>>a[1]>>a[2];
		long long res=0,i,j;
		sort(a,a+3);
		for(i=0;i<=a[0];i++){
			for(j=0;j<=a[1];j++){
				if(i+j<=n){
					res+=min(a[2]+1,n-i-j+1);
				}
			}
		}
		cout<<res<<endl;
	}
}
