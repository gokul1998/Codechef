#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long money,i,a[n],b[n],res=0,stones,maxi=-1;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n;i++)cin>>b[i];
		for(i=0;i<n;i++){
			stones=floor(k/a[i]);
			money=stones*b[i];
			maxi=max(maxi,money);
		}
		cout<<maxi<<endl;
	}
}
