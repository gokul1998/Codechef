#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>&a,pair<int,int>&b){
	if(a.first>b.first)return a.first<b.first;
	if(a.first==b.first)return a.second>b.second;
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i;
		cin>>n;
		pair<int,int>a[n];
		for(i=0;i<n;i++){
			cin>>a[i].first>>a[i].second;
		}
		sort(a,a+n,cmp);
		double res=0.0;
		for(i=1;i<=n-1;i++){
			res+=sqrt(pow(abs(a[i].first-a[i-1].first),2)+pow(abs(a[i].second-a[i-1].second),2));
		}
		cout<<fixed<<setprecision(2)<<res<<endl;
	}
}
