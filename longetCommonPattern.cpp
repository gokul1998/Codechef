#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		int first[256]={0},second[256]={0};
		cin>>a>>b;
		long long ans=0,i,alen=a.size(),blen=b.size();
		for(i=0;i<alen;i++)first[a[i]]++;
		for(i=0;i<blen;i++)second[b[i]]++;
		for(i=0;i<256;i++){
			ans+=min(first[i],second[i]);
		}
		cout<<ans<<endl;
	}
}
